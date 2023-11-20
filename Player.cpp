#include "Player.h"
#include<Novice.h>

void Player::Initialize() { pos = {640, 360}; }

void Player::Update() { Novice::DrawBox((int)pos.x, (int)pos.y, 16, 16, 0, WHITE, kFillModeSolid);

}


void Player::MoveRight() { this->pos.x += this->spd; }

void Player::MoveLeft() { this->pos.x -= this->spd; }
