#include <M5Unified.h>
#include <LittleFS.h>
#include <math.h>
#include "evolutions.h"
namespace {

constexpr unsigned long FRAME_INTERVAL_MS = 1000;
constexpr unsigned long HUNGER_DURATION_MS = 2UL * 60UL * 1000UL;

struct __attribute__((packed)) Header {
    uint32_t magic;
    uint16_t version;
    uint16_t count;
    uint32_t offsets[char_count * 8];
};

File image_bin;
M5Canvas frameBuffer(&M5.Display);
bool frameBufferReady = false;
Header header;
CharacterId currentCharacter = char_base;
CharacterId evolutionTarget = char_base;
unsigned long lastFrameTime = 0;
unsigned long lastFedTime = 0;
float evolutionRotationDegrees = 0.0f;
uint32_t lastImuTime = 0;
bool evolutionMode = false;
bool filesystemReady = false;

int hungerPercent()
{
    const unsigned long elapsed = millis() - lastFedTime;
    if (elapsed >= HUNGER_DURATION_MS) {
        return 100;
    }
    return (elapsed * 100UL) / HUNGER_DURATION_MS;
}

void drawFrame(CharacterId character, uint8_t frame)
{
    Serial.printf("Drawing frame %d for character %d\n", frame, character);
    const uint32_t startOffset = header.offsets[character * 8 + frame];
    image_bin.seek(startOffset, SeekSet);
    if (frameBufferReady) {
        frameBuffer.fillScreen(TFT_BLACK);
        frameBuffer.drawJpg(static_cast<Stream*>(&image_bin), 0, 0);
        frameBuffer.pushSprite(0, 0);
    } else {
        M5.Display.fillScreen(TFT_BLACK);
        M5.Display.drawJpg(static_cast<Stream*>(&image_bin), 0, 0);
    }
}

void startEvolution()
{
    evolutionMode = true;
    evolutionTarget = currentCharacter;
    evolutionRotationDegrees = 0.0f;
    lastImuTime = micros();
    drawFrame(currentCharacter, 7);
}

void updateEvolutionPreview()
{
    const auto imuData = M5.Imu.getImuData();
    const uint32_t now = micros();
    const uint32_t elapsedMicros = now - lastImuTime;
    lastImuTime = now;

    evolutionRotationDegrees += imuData.gyro.x * (elapsedMicros / 1000000.0f);
    evolutionRotationDegrees = fmodf(evolutionRotationDegrees, 360.0f);
    if (evolutionRotationDegrees < 0.0f) {
        evolutionRotationDegrees += 360.0f;
    }

    const CharacterInfo& current = characters[currentCharacter];
    const uint8_t segmentCount = current.evolutionCount + 1;
    const float segmentWidth = 360.0f / segmentCount;
    const uint8_t segment = static_cast<uint8_t>(
        floorf(evolutionRotationDegrees / segmentWidth + 0.5f)) % segmentCount;

    const CharacterId target = segment == 0
        ? currentCharacter
        : current.evolutions[segment - 1];

    if (target != evolutionTarget) {
        evolutionTarget = target;
        drawFrame(evolutionTarget, 7);
    }
}

void finishEvolution()
{
    evolutionMode = false;
    if (evolutionTarget != currentCharacter) {
        currentCharacter = evolutionTarget;
        Serial.printf("New character ID: %d\n", currentCharacter);
        drawFrame(currentCharacter, 0);
    }
    lastFrameTime = millis();
}

void feedCharacter()
{
    lastFedTime = millis();
    drawFrame(currentCharacter, static_cast<uint8_t>(5 + random(0, 2)));
    lastFrameTime = millis();
}

void updateButtons(bool imuUpdated)
{
    const bool evolutionButtonPressed = M5.BtnB.wasPressed();
    const bool evolutionButtonReleased = M5.BtnB.wasReleased();

    if (evolutionButtonPressed) {
        startEvolution();
    }

    if (evolutionMode && M5.BtnB.isPressed() && imuUpdated) {
        updateEvolutionPreview();
    }

    if (evolutionButtonReleased) {
        finishEvolution();
    }

    if (!evolutionButtonPressed && !evolutionButtonReleased &&
        !evolutionMode && M5.BtnA.wasPressed()) {
        feedCharacter();
    }
}

void updateCharacterFrame()
{
    const unsigned long now = millis();
    if (now - lastFrameTime < FRAME_INTERVAL_MS) {
        return;
    }

    lastFrameTime = now;
    const int hunger = hungerPercent();
    if (random(0, 100) < hunger) {
        drawFrame(currentCharacter, 4);
    } else {
        drawFrame(currentCharacter, static_cast<uint8_t>(random(0, 4)));
    }
}

} // namespace

void setup()
{
    auto cfg = M5.config();
    M5.begin(cfg);
    M5.Display.setRotation(0);
    frameBuffer.setColorDepth(16);
    frameBufferReady = frameBuffer.createSprite(M5.Display.width(), M5.Display.height()) != nullptr;
    M5.Display.fillScreen(TFT_BLACK);
    // Serial.begin(115200);
    // delay(1000);
    Serial.println("BOOT");
    Serial.printf("LittleFS total: %u\n", LittleFS.totalBytes());
    Serial.printf("LittleFS used:  %u\n", LittleFS.usedBytes());
    bool mounted = LittleFS.begin(true);
    Serial.printf("LittleFS mount: %s\n", mounted ? "OK" : "FAIL");
    if (mounted) {
        Serial.printf("LittleFS total: %u\n", LittleFS.totalBytes());
        Serial.printf("LittleFS used:  %u\n", LittleFS.usedBytes());
    }
    image_bin = LittleFS.open("/images.bin", "r");
    if (!image_bin) {
        M5.Display.setCursor(10, 30);
        M5.Display.setTextSize(2);
        M5.Display.println("Failed to open images.bin!");
        return;
    }
    image_bin.read(reinterpret_cast<uint8_t*>(&header), sizeof(Header));
    filesystemReady = true;
    randomSeed(micros());
    lastFedTime = millis();
    lastFrameTime = millis();
    drawFrame(currentCharacter, 0);
}

void loop()
{
    M5.update();
    const bool imuUpdated = M5.Imu.update();
    updateButtons(imuUpdated);

    if (filesystemReady && !evolutionMode) {
        updateCharacterFrame();
    }

    delay(5);
}
