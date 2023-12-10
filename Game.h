#pragma once

#include "Ball.h"
#include "Player.h"
enum direction {dir_up,dir_down,dir_right,dir_left};

class Game {
private:
    Ball ball;
    Player player1;
    Player player2;
    float paddle_height = 3.0;
    float paddle_width = 2.0;
    float ball_radius = 1.0;
    float wall_width = 2.0;
    float wall_height = 6.0;
    float wall_depth = 6.0;
    float paddle_depth = 0.1;
    
public:
    Game();
    Game(Player& p1, Player& p2, Ball& b);

    void update();

    //class to check restrict movments
    void movePlayer(int n_player,enum direction);



    Player* getPlayer1();
    Player* getPlayer2();
    Ball* getBall();
    float getPaddleHeight();
    float getPaddleWidth();
    float getBallRadius();
    float getWallWidth();
    float getWallHeight();
    float getWallDepth();

    // Setters
    void setPlayer1(Player& p1);
    void setPlayer2(Player& p2);
    void setBall(Ball& b);
    void setPaddleHeight(float height);
    void setPaddleWidth(float width);
    void setBallRadius(float radius);
    void setWallWidth(float width);
    void setWallHeight(float height);
    void setWallDepth(float depth);

};
