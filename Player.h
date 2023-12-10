#pragma once

class Player {
private:
    float pos_x;
    float pos_y;
    float pos_z;
    float width;
    float height;

public:
    // Constructor
    Player() = default;
    Player(float x, float y, float z, float w, float h);

    // Destructor
    ~Player();

    // Other member functions and operators

    // Getter methods
    float getX() const;
    float getY() const;
    float getZ() const;
    float getWidth() const;
    float getHeight() const;

    // Movement methods
    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();
};
