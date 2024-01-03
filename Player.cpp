#include "Player.h"



Player::Player(float x, float y, float z, float w, float h)
    : pos_x(x), pos_y(y), pos_z(z), width(w), height(h) {
}

float Player::getX() const {
    return pos_x;
}

float Player::getY() const {
    return pos_y;
}

float Player::getZ() const {
    return pos_z;
}

float Player::getWidth() const {
    return width;
}

float Player::getHeight() const {
    return height;
}

void Player::moveUp() {
    pos_y += 0.5;
}

void Player::moveDown() {
    pos_y -= 0.5;
}

void Player::moveRight() {
    pos_x += 0.5;
}

void Player::moveLeft() {
    pos_x -= 0.5;
}
Player::~Player() {
}