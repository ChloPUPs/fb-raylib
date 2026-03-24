#include <stdint.h>
#include <stdio.h>

#include "../include/raylib.h"

#include "./include/player.h"
#include "./include/pipe.h"

// Flappy Bird where the pipes come to you and you can move around and avoid them?
// countdown to fall
// Are pipes on conveyor belt???

int main() {
    const int32_t screenWidth = 1280;
    const int32_t screenHeight = 720;
    const char windowName[] = "First Raylib Game";

    InitWindow(screenWidth, screenHeight, windowName);
    SetExitKey(KEY_NULL);

    Player player = {
        .gravity = 0.5f,
        .speed = 4.0f,
        .jumpVelocity = 10.0f,
        .pos = (Vector2) { (float)screenWidth / 3.0f, (float)screenHeight / 3.0f },
        .velocity = (Vector2) { 0.0f, 0.0f },
        .direction = 0.0f,
        .drawSize = 20.0f,
        .hBoxSize = 15.0f,
    };

    Pipe testPipe = {
        .pos = (Vector2) { .x = (float)screenWidth, .y = (float)screenHeight / 2.0f},
        .width = 60.0f,
        .speed = 5.0f,
        .gapSize = 160.0f,
    };

    SetTargetFPS(60);

    enum PlayerState currentGameState = P_GAMEPLAY;

    while (!WindowShouldClose()) {
        Pipe_move(&testPipe);

        switch (currentGameState) {
            case P_GAMEPLAY: Player_gameplayState(&player);
            case P_DEATH:
        }

        BeginDrawing();
            ClearBackground(RAYWHITE);

            Pipe_draw(&testPipe, screenHeight * 3);
            if (currentGameState == P_GAMEPLAY) Player_draw(&player);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
