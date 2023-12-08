#include "Game.h"

Game::Game() : player1(0, 0, 6, 2, 3), player2(0, 0, -6, 2, 3), ball() {
    // Initialize other members if needed
}

Game::Game(Player& p1, Player& p2, Ball& b) : player1(p1), player2(p2), ball(b) {
    // Initialize other members if needed
}

void Game::update() {
   

    // Check for collisions with walls
    if (ball.getPosX() - ball.getRadius() < -wall_width / 2 || ball.getPosX() + ball.getRadius() > wall_width / 2) {
        // Ball hit left or right wall, invert velocity in x direction
        ball.change_direction(true, false, false);
    }

    if (ball.getPosY() - ball.getRadius() < -wall_height / 2 || ball.getPosY() + ball.getRadius() > wall_height / 2) {
        // Ball hit top or bottom wall, invert velocity in y direction
        ball.change_direction(false, true, false);
    }

    // Check for collisions with paddles
    if (ball.getPosX() - ball.getRadius() < player1.getX() + player1.getWidth() / 2 &&
        ball.getPosX() + ball.getRadius() > player1.getX() - player1.getWidth() / 2 &&
        ball.getPosY() - ball.getRadius() < player1.getY() + player1.getHeight() / 2 &&
        ball.getPosY() + ball.getRadius() > player1.getY() - player1.getHeight() / 2) {
        // Ball hit player 1's paddle, invert velocity in x direction
        ball.change_direction(true, false, false);
    }

    if (ball.getPosX() - ball.getRadius() < player2.getX() + player2.getWidth() / 2 &&
        ball.getPosX() + ball.getRadius() > player2.getX() - player2.getWidth() / 2 &&
        ball.getPosY() - ball.getRadius() < player2.getY() + player2.getHeight() / 2 &&
        ball.getPosY() + ball.getRadius() > player2.getY() - player2.getHeight() / 2) {
        // Ball hit player 2's paddle, invert velocity in x direction
        ball.change_direction(true, false, false);
    }


    ball.move();
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
