#pragma once
#include "Ball.h"
#include "Player.h"
class Game
{
private:

    Ball ball;
    Player player1;
    Player player2;
    float paddle_height = 6;
    float paddle_width = 2;
    float ball_radius = 5;
    float wall_width = 0;
    float wall_height = 0;
    float wall_depth = 0;


public:
    Game(Player& p1, Player& p2, Ball& b);

    void update();
    Player& getPlayer1() { return player1; }
    Player& getPlayer2() { return player2; }

};

Game::Game(Player& p1, Player& p2, Ball& b) : player1(p1), player2(p2), ball(b) {}





void Game::update()
{
  //check if ball collides with wall
  //check if ball collides with paddle 
  //move ball

}
