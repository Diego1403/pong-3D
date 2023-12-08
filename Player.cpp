#include "Player.h"

Player::Player(int x, int y, int z, int w, int h)
    : pos_x(x), pos_y(y), pos_z(z), width(w), height(h) {
}

int Player::getX() const {
    return pos_x;
}

int Player::getY() const {
    return pos_y;
}

int Player::getZ() const {
    return pos_z;
}

int Player::getWidth() const {
    return width;
}

int Player::getHeight() const {
    return height;
}

void Player::moveUp() {
    pos_y -= 1;
}

void Player::moveDown() {
    pos_y += 1;
}

void Player::moveRight() {
    pos_x += 1;
}

void Player::moveLeft() {
    pos_x -= 1;
}
Player::~Player() {
}