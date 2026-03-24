#pragma once

#include "../../include/raylib.h"

#define PIPE_COLOR GREEN

typedef struct {
    Vector2 pos;
    float speed;
    float width;
    float gapSize;
} Pipe;

void Pipe_move(Pipe* p);
void Pipe_draw(Pipe* p, int drawHeight);
