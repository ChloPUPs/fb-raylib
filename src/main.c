#include <stdint.h>
#include <stdio.h>

#include "../include/raylib.h"

// Flappy Bird where the pipes come to you and you can move around and avoid them?
// countdown to fall

int main() {
    const int32_t screenWidth = 1280;
    const int32_t screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "First Raylib Game");

    const float gravity = 0.5f;
    const float playerSpeed = 4.0f;
    const float playerJumpVelocity = 10.0f;
    Vector2 playerPos = { (float)screenWidth / 3.0f, (float)screenHeight / 3.0f };
    Vector2 playerVelocity = { 0.0f, 0.0f };
    float playerDirection = 0.0f;

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        playerDirection = -IsKeyDown(KEY_LEFT) + IsKeyDown(KEY_RIGHT);
        playerVelocity.x = playerDirection * playerSpeed;

        if (IsKeyPressed(KEY_SPACE)) playerVelocity.y = -playerJumpVelocity;

        playerVelocity.y += gravity;

        playerPos.x += playerVelocity.x;
        playerPos.y += playerVelocity.y;

        BeginDrawing();
        
            ClearBackground(RAYWHITE);

            if (IsKeyDown(KEY_T))
                DrawText("First Window!!!!!!", 20, (screenHeight / 2) - 32, 64, BLACK);
            DrawCircleV(playerPos, 20, RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
