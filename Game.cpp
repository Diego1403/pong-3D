#include "Game.h"
#include <iostream>

Game::Game() {
    player1 = Player(0, 0, 3, paddle_width, paddle_height);
    player2 = Player(0, 0, -3, paddle_width, paddle_height);
    ball = Ball(ball_radius);
    wall_depth = player1.getZ() - player2.getZ();
    // Initialize other members if needed
}

Game::Game(Player& p1, Player& p2, Ball& b) : player1(p1), player2(p2), ball(b) {
    // Initialize other members if needed
}

void Game::update() {
   


    // Check for collisions with walls
    if (ball.getPosX()  < -wall_width/2  ) {
        ball.change_direction(moving::right);
    }
    if (ball.getPosX() > wall_width / 2) {
        ball.change_direction(moving::left);
    }

    if (ball.getPosY()  < -wall_height/2  ) {
        ball.change_direction(moving::up);
    }
    if (ball.getPosY() > wall_height / 2) {
        ball.change_direction(moving::down);
    }

    std::cout << "b:" << ball.getPosX() << "," << ball.getPosY() <<","<< ball.getPosZ()  << std::endl;
    std::cout << "p:" << player1.getX()<<","<< player1.getY() <<"," << player1.getZ()<< std::endl;
    // Ball hit player 1's paddle
    if (ball.getPosX() - ball.getRadius() <= player1.getX() + player1.getWidth() / 2 &&
        ball.getPosX() + ball.getRadius() >= player1.getX() - player1.getWidth() / 2 &&
        ball.getPosY() - ball.getRadius() <= player1.getY() + player1.getHeight() / 2 &&
        ball.getPosY() + ball.getRadius() >= player1.getY() - player1.getHeight() / 2 &&
        ball.getPosZ() - ball.getRadius() <= player1.getZ() + paddle_depth &&
        ball.getPosZ() + ball.getRadius() >= player1.getZ() - paddle_depth)
    {
        // Ball hit player 1's paddle, invert velocity in z direction
        ball.change_direction(moving::forward);
    }

    // Ball hit player 2's paddle
    if (ball.getPosX() - ball.getRadius() <= player2.getX() + player2.getWidth() / 2 &&
        ball.getPosX() + ball.getRadius() >= player2.getX() - player2.getWidth() / 2 &&
        ball.getPosY() - ball.getRadius() <= player2.getY() + player2.getHeight() / 2 &&
        ball.getPosY() + ball.getRadius() >= player2.getY() - player2.getHeight() / 2 &&
        ball.getPosZ() - ball.getRadius() <= player2.getZ() + paddle_depth &&
        ball.getPosZ() + ball.getRadius() >= player2.getZ() - paddle_depth)
    {
        // Ball hit player 2's paddle, invert velocity in z direction
        ball.change_direction(moving::backwards);
    }



    if (ball.getPosZ() < -wall_depth  - ball_radius) {
        ball.reset();

    }
    if (ball.getPosZ() > wall_depth + ball_radius) {
        ball.reset();
    }
    ball.move();

    
}

void Game::movePlayer(int n_player, direction dir)
{
    if (n_player == 1) {
        if (dir == up && player1.getY() + paddle_height < wall_height ) {
            player1.moveUp();
        }
        if (dir == down && player1.getY() - paddle_height > -wall_height ) {
            player1.moveDown();
        }
        if (dir == right && player1.getX() + paddle_width < wall_width ) {
            player1.moveRight();
        }
        if (dir == left && player1.getX() - paddle_width > -wall_width ) {
            player1.moveLeft();
        }
    }
    if (n_player == 2) {
        if (dir == up && player2.getY() + paddle_height < wall_height ) {
            player2.moveUp();
        }
        if (dir == down && player2.getY() - paddle_height > -wall_height ) {
            player2.moveDown();
        }
        if (dir == right && player2.getX() + paddle_width < wall_width ) {
            player2.moveRight();
        }
        if (dir == left && player2.getX() - paddle_width > -wall_width ) {
            player2.moveLeft();
        }
    }
}


Player* Game::getPlayer1() {
    return &player1;
}

Player* Game::getPlayer2() {
    return &player2;
}

Ball* Game::getBall() {
    return &ball;
}

float Game::getPaddleHeight() {
    return paddle_height;
}

float Game::getPaddleWidth() {
    return paddle_width;
}

float Game::getPaddleDepth()
{
    return paddle_depth;
}

float Game::getBallRadius() {
    return ball_radius/2;
}

float Game::getWallWidth() {
    return wall_width;
}

float Game::getWallHeight() {
    return wall_height;
}

float Game::getWallDepth() {
    return wall_depth;
}

// Setter implementations
void Game::setPlayer1(Player& p1) {
    player1 = p1;
}

void Game::setPlayer2(Player& p2) {
    player2 = p2;
}

void Game::setPaddleHeight(float height) {
    paddle_height = height;
}

void Game::setPaddleWidth(float width) {
    paddle_width = width;
}

void Game::setBallRadius(float radius) {
    ball_radius = radius;
}

void Game::setWallWidth(float width) {
    wall_width = width;
}

void Game::setWallHeight(float height) {
    wall_height = height;
}

void Game::setWallDepth(float depth) {
    wall_depth = depth;
}