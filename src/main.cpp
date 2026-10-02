#include <M5Unified.h>
#include <LittleFS.h>

// --------------------------------------------------
// Animation frames
// --------------------------------------------------

const char* idleFrames[] = {
    "/idle0.png",
    "/idle1.png",
    "/idle2.png"
};

const char* hungryFrames[] = {
    "/hungry0.png",
    "/hungry1.png"
};

const char* eatFrames[] = {
    "/eat0.png",
    "/eat1.png",
    "/eat2.png",
    "/eat3.png"
};

const int IDLE_FRAME_COUNT = 3;
const int HUNGRY_FRAME_COUNT = 2;
const int EAT_FRAME_COUNT = 4;


// --------------------------------------------------
// Timing
// --------------------------------------------------

// Animation speeds
const unsigned long IDLE_FRAME_TIME   = 500;
const unsigned long HUNGRY_FRAME_TIME = 600;
const unsigned long EAT_FRAME_TIME    = 150;

// Time to go from completely fed to completely hungry.
//
// 2 minutes is convenient for testing.
// Change this to:
//   30UL * 60UL * 1000UL       // 30 minutes
//   2UL * 60UL * 60UL * 1000UL // 2 hours
// etc.
const unsigned long HUNGER_DURATION = 2UL * 60UL * 1000UL;

// At this percentage, the creature starts showing
// the hungry animation.
const int HUNGER_THRESHOLD = 60;


// --------------------------------------------------
// Game state
// --------------------------------------------------

enum State {
    IDLE,
    HUNGRY,
    EATING
};

State state = IDLE;

int currentFrame = 0;

unsigned long lastFrameTime = 0;

// Time when the creature was last fed.
unsigned long lastFedTime = 0;


// --------------------------------------------------
// Drawing
// --------------------------------------------------

void drawFrame(const char* filename)
{
    M5.Display.fillScreen(TFT_BLACK);

    if (!LittleFS.exists(filename)) {
        M5.Display.setCursor(10, 10);
        M5.Display.setTextSize(2);
        M5.Display.printf("Missing:\n%s", filename);
        return;
    }

    M5.Display.drawPngFile(LittleFS, filename, 0, 0);
}


// --------------------------------------------------
// Hunger
// --------------------------------------------------

int getHunger()
{
    unsigned long elapsed = millis() - lastFedTime;

    if (elapsed >= HUNGER_DURATION) {
        return 100;
    }

    return (elapsed * 100UL) / HUNGER_DURATION;
}


void updateHunger()
{
    // Eating is handled separately.
    if (state == EATING) {
        return;
    }

    int hunger = getHunger();

    // Once sufficiently hungry, switch to the hungry state.
    if (hunger >= HUNGER_THRESHOLD) {

        if (state != HUNGRY) {
            state = HUNGRY;
            currentFrame = 0;
            lastFrameTime = 0;
        }
    }
}


// --------------------------------------------------
// Animation
// --------------------------------------------------

void updateAnimation()
{
    unsigned long now = millis();

    unsigned long frameTime;

    switch (state) {

        case IDLE:
            frameTime = IDLE_FRAME_TIME;
            break;

        case HUNGRY:
            frameTime = HUNGRY_FRAME_TIME;
            break;

        case EATING:
            frameTime = EAT_FRAME_TIME;
            break;
    }

    if (now - lastFrameTime < frameTime) {
        return;
    }

    lastFrameTime = now;


    switch (state) {

        // ------------------------------------------
        // Idle animation
        // ------------------------------------------

        case IDLE:

            drawFrame(idleFrames[currentFrame]);

            currentFrame++;

            if (currentFrame >= IDLE_FRAME_COUNT) {
                currentFrame = 0;
            }

            break;


        // ------------------------------------------
        // Hungry animation
        // ------------------------------------------

        case HUNGRY:

            drawFrame(hungryFrames[currentFrame]);

            currentFrame++;

            if (currentFrame >= HUNGRY_FRAME_COUNT) {
                currentFrame = 0;
            }

            break;


        // ------------------------------------------
        // Eating animation
        // ------------------------------------------

        case EATING:

            drawFrame(eatFrames[currentFrame]);

            currentFrame++;

            if (currentFrame >= EAT_FRAME_COUNT) {

                // Finished eating.
                //
                // Reset the hunger timer.
                lastFedTime = millis();

                // Return to idle.
                state = IDLE;
                currentFrame = 0;
                lastFrameTime = 0;

                drawFrame(idleFrames[0]);
            }

            break;
    }
}


// --------------------------------------------------
// Button
// --------------------------------------------------

void updateButton()
{
    M5.update();

    if (!M5.BtnA.wasPressed()) {
        return;
    }

    // Don't interrupt eating.
    if (state == EATING) {
        return;
    }

    // Start eating.
    state = EATING;
    currentFrame = 0;
    lastFrameTime = 0;
}


// --------------------------------------------------
// Setup
// --------------------------------------------------

void setup()
{
    auto cfg = M5.config();
    M5.begin(cfg);

    M5.Display.setRotation(0);
    M5.Display.fillScreen(TFT_BLACK);

    // Mount filesystem containing PNGs.
    if (!LittleFS.begin(true)) {

        M5.Display.setCursor(10, 10);
        M5.Display.setTextSize(2);
        M5.Display.println("LittleFS failed!");

        return;
    }

    // Start completely fed.
    lastFedTime = millis();

    // Show first frame immediately.
    drawFrame(idleFrames[0]);
}


// --------------------------------------------------
// Main loop
// --------------------------------------------------

void loop()
{
    updateButton();
    updateHunger();
    updateAnimation();

    delay(5);
}
