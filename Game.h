#pragma once

#include "Ball.h"
#include "Player.h"

class Game {
private:
    Ball ball;
    Player player1;
    Player player2;
    float paddle_height;
    float paddle_width;
    float ball_radius;
    float wall_width;
    float wall_height;
    float wall_depth;

public:
    Game();
    Game(Player& p1, Player& p2, Ball& b);

    void update();
    Player* getPlayer1();
    Player* getPlayer2();
    Ball* getBall();

};
