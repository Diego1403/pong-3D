# 3D Pong Game

This is a 3D pong game implemented in C++ using OpenGL for rendering. The game consists of two players and a ball. Each player controls a paddle and the objective is to hit the ball with the paddle. The game continues until the ball hits the wall behind a player, at which point the other player scores a point.

## Code Structure

The code is divided into several classes:

- `Game`: This is the main class that controls the game logic. It contains instances of the `Player` and `Ball` classes and methods to update the game state and handle player movements.

- `Player`: This class represents a player in the game. It contains the player's position, size of the paddle, and methods to move the paddle.

- `Ball`: This class represents the ball in the game. It contains the ball's position, velocity, and methods to move the ball and change its direction.

- `cgvInterface`: This class handles the OpenGL interface, including creating the window, handling keyboard input, and rendering the scene.

- `cgvScene3D`: This class handles the rendering of the game objects (players and ball) and the game field.

- `cgvCamera`: This class manages the camera in the 3D space. It sets the perspective and parallel parameters and applies the camera transformations.

## Controls

The game is controlled using the keyboard:

- Player 1: Use the 'w', 'a', 's', and 'd' keys to move the paddle up, left, down, and right, respectively.
- Player 2: Use the 'i', 'j', 'k', and 'l' keys to move the paddle up, left, down, and right, respectively.

## Customization

You can customize the game by modifying the parameters in the `Game`, `Player`, and `Ball` classes. For example, you can change the size of the paddles, the speed of the ball, or the size of the game field.
