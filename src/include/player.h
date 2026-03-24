#pragma once

typedef struct {
    const float gravity;
    const float speed;
    const float jumpVelocity;
    Vector2 pos;
    Vector2 velocity;
    float direction;
} Player;

enum PlayerState {
    P_GAMEPLAY,
    P_DEATH,
};

void Player_handleInput(Player* player);
void Player_applyVelocity(Player* player);
void Player_draw(Player* player);
void Player_gameplayState(Player* player);
