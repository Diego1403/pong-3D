#pragma once

class Player {
private:
    int pos_x;
    int pos_y;
    int pos_z;
    int width;
    int height;

public:
    // Constructor
    Player(int x, int y, int z, int w, int h);

    // Destructor
    ~Player();

    // Other member functions and operators

    // Getter methods
    int getX() const;
    int getY() const;
    int getZ() const;
    int getWidth() const;
    int getHeight() const;

    // Movement methods
    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();
};
