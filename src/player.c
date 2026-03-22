#include "../include/raylib.h"

#include "./include/player.h"

void Player_handleInput(Player* player) {
    player->direction = -IsKeyDown(KEY_LEFT) + IsKeyDown(KEY_RIGHT);
    player->velocity.x = player->direction * player->speed;

    if (IsKeyPressed(KEY_SPACE)) player->velocity.y = -player->jumpVelocity;

    player->velocity.y += player->gravity;
}

void Player_applyVelocity(Player* player) {
    player->pos.x += player->velocity.x;
    player->pos.y += player->velocity.y;
}

void Player_draw(Player* player) {
    DrawCircleV(player->pos, 20, RED);
}
