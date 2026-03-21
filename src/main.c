#include <stdint.h>
#include <stdio.h>

#include "../include/raylib.h"

int main() {
    const int32_t screenWidth = 1280;
    const int32_t screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "First Raylib Game");

    Vector2 playerPos = { (float)screenWidth / 3.0f , (float)screenHeight * (2.0f / 3.0f) };
    Vector2 playerMovement = { 0.0f, 0.0f };
    float playerSpeed = 4.0f;

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        // Get Input
        
        playerMovement.x = -IsKeyDown(KEY_LEFT) + IsKeyDown(KEY_RIGHT);
        playerMovement.y = -IsKeyDown(KEY_UP) + IsKeyDown(KEY_DOWN);

        playerPos.x += playerMovement.x * playerSpeed;
        playerPos.y += playerMovement.y * playerSpeed;

        // vvv
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
