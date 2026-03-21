#include <stdint.h>
#include <stdio.h>

#include "../include/raylib.h"

int main() {
    const int32_t screenWidth = 1280;
    const int32_t screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "First Raylib Game");

    //printf("y: %.2f\n", (float)screenHeight * (2.0f / 3.0f));
    Vector2 playerPos = { (float)screenWidth / 3.0f , (float)screenHeight * (2.0f / 3.0f) };

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        //printf("playerPos: %.2f, %.2f\n", playerPos.x, playerPos.y);

        BeginDrawing();
        
            ClearBackground(RAYWHITE);

            if (IsKeyDown(KEY_UP))
                DrawText("First Window!!!!!!", 20, (screenHeight / 2) - 32, 64, BLACK);
            DrawCircleV(playerPos, 20, RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
