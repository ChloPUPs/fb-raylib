#include <stdint.h>
#include <stdio.h>

#include "../include/raylib.h"

#include "./include/player.h"

// Flappy Bird where the pipes come to you and you can move around and avoid them?
// countdown to fall

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
    };

    SetTargetFPS(60);

    enum PlayerState currentGameState = P_GAMEPLAY;

    while (!WindowShouldClose()) {
        switch (currentGameState) {
            case P_GAMEPLAY: Player_gameplayState(&player);
            case P_DEATH:
        }

        BeginDrawing();
            ClearBackground(RAYWHITE);

            if (currentGameState == P_GAMEPLAY) Player_draw(&player);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
