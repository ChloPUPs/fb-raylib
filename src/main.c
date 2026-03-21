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

            DrawText("First Window!!!!!!", 20, 20, 16, BLACK);
        
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
