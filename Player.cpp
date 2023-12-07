// Player.cpp
#include "Player.h"
#include <utility> 
// Constructor
Player::Player(int x, int y, int z, int w, int h)
    : pos_x(x), pos_y(y), pos_z(z), width(w), height(h)
{

}

Player::~Player()
{}

// Copy constructor
Player::Player(const Player& other)
    : pos_x(other.pos_x), pos_y(other.pos_y), pos_z(other.pos_z), width(other.width), height(other.height)
{

}

// Move constructor
Player::Player(Player&& other) noexcept
    : pos_x(std::exchange(other.pos_x, 0)), pos_y(std::exchange(other.pos_y, 0)),
    pos_z(other.pos_z), width(other.width), height(other.height)
{
}

// Assignment operator
Player& Player::operator=(const Player& other)
{
    if (this != &other)
    {
        pos_x = other.pos_x;
        pos_y = other.pos_y;
 
    }
    return *this;
}

// Move assignment operator
Player& Player::operator=(Player&& other) noexcept
{
    if (this != &other)
    {
        pos_x = std::exchange(other.pos_x, 0);
        pos_y = std::exchange(other.pos_y, 0);
        // Move other members
    return *this;
    }
}

bool Player::operator==(const Player& other) const
{
    return (pos_x == other.pos_x && pos_y == other.pos_y && pos_z == other.pos_z &&
        width == other.width && height == other.height);
}


bool Player::operator!=(const Player& other) const
{
    return !(*this == other);
}

int Player::getX() const
{
    return pos_x;
}

int Player::getY() const
{
    return pos_y;
}

int Player::getZ() const
{
    return pos_z;
}

int Player::getWidth() const
{
    return width;
}

int Player::getHeight() const
{
    return height;
}

// Movement methods
void Player::moveUp()
{
pos_y -= 1;
}

void Player::moveDown()
{
 pos_y += 1;
}

void Player::moveRight()
{
 pos_x += 1;
}

void Player::moveLeft()
{
pos_x -= 1;
}
