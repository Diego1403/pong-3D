#pragma once

class Player
{
private:
    int pos_x;
    int pos_y;
    const int pos_z;
    const int width;
    const int height;

public:
    // Constructor
    Player(int x, int y, int z, int w, int h);

    // Destructor
    ~Player();
    Player(const Player& other);


    Player(Player&& other) noexcept;
    Player& operator=(const Player& other);
    Player& operator=(Player&& other) noexcept;
    bool operator==(const Player& other) const;
    bool operator!=(const Player& other) const;

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
