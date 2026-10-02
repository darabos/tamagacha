#include <M5Unified.h>
#include <LittleFS.h>
#include <math.h>

namespace {

constexpr unsigned long FRAME_INTERVAL_MS = 1000;
constexpr unsigned long HUNGER_DURATION_MS = 2UL * 60UL * 1000UL;

enum CharacterId {
    BASE,
    CAT1,
    CAT2,
    DIVER1,
    DIVER2,
    CHARACTER_COUNT
};

const CharacterId baseEvolutions[] = {CAT1, DIVER1};
const CharacterId cat1Evolutions[] = {CAT2, BASE};
const CharacterId cat2Evolutions[] = {CAT1};
const CharacterId diver1Evolutions[] = {DIVER2, BASE};
const CharacterId diver2Evolutions[] = {DIVER1};

struct CharacterInfo {
    const char* name;
    const CharacterId* evolutions;
    uint8_t evolutionCount;
};

const CharacterInfo characters[CHARACTER_COUNT] = {
    {"base", baseEvolutions, 2},
    {"cat1", cat1Evolutions, 2},
    {"cat2", cat2Evolutions, 1},
    {"diver1", diver1Evolutions, 2},
    {"diver2", diver2Evolutions, 1}
};

CharacterId currentCharacter = BASE;
CharacterId evolutionTarget = BASE;
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
    char filename[48];
    snprintf(filename, sizeof(filename), "/assets/%s/%u.jpg",
             characters[character].name, frame);

    M5.Display.fillScreen(TFT_BLACK);
    File image = LittleFS.open(filename, "r");
    M5.Display.drawJpg(static_cast<Stream*>(&image), 0, 0);
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
    M5.Display.fillScreen(TFT_BLACK);

    if (!LittleFS.begin(true)) {
        M5.Display.setCursor(10, 10);
        M5.Display.setTextSize(2);
        M5.Display.println("LittleFS failed!");
        return;
    }

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
