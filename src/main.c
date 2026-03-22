#include <stdint.h>
#include <stdio.h>

#include "../include/raylib.h"

#include "./include/player.h"

// Flappy Bird where the pipes come to you and you can move around and avoid them?
// countdown to fall

int main() {
    const int32_t screenWidth = 1280;
    const int32_t screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "First Raylib Game");

    Player player = {
        .gravity = 0.5f,
        .speed = 4.0f,
        .jumpVelocity = 10.0f,
        .pos = { (float)screenWidth / 3.0f, (float)screenHeight / 3.0f },
        .velocity = { 0.0f, 0.0f },
        .direction = 0.0f,
    };

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        Player_handleInput(&player);
        Player_applyVelocity(&player);

        BeginDrawing();
            ClearBackground(RAYWHITE);

            Player_draw(&player);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
