#include <stdint.h>

#include "../include/raylib.h"

int main() {
    const int32_t screenWidth = 1280;
    const int32_t screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "First Raylib Game");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        
            ClearBackground(RAYWHITE);

            if (IsKeyDown(KEY_UP))
                DrawText("First Window!!!!!!", 20, (screenHeight / 2) - 32, 64, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
