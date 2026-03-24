#include "./include/pipe.h"

void Pipe_move(Pipe* p) {
    p->pos.x += -(p->speed);
}

void Pipe_draw(Pipe* p, int drawHeight) {
    DrawRectangle((int)p->pos.x, (int)p->pos.y - drawHeight - ((int)p->gapSize / 2), p->width, drawHeight, PIPE_COLOR);
    DrawRectangle((int)p->pos.x, (int)p->pos.y + (int)p->gapSize / 2, p->width, drawHeight, PIPE_COLOR);
}
