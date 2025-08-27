#include "game.hpp"

#include <cmath>

// // Constructor
// Game::Game() {
//     Ball   ball;
//     Player player(
//         Vector2{10.0f, (GetScreenHeight() - 60.0f / 2.0f)},
//         25.0f, 120.0f,
//         6
// );
//     AI ai(
//         Vector2{10.0f, (GetScreenHeight() - 60.0f / 2.0f)},
//         25.0f, 120.0f,
//         6
// );
// }

// Constructor
Game::Game()
    : ball(), player(Vector2{10.0f, (GetScreenHeight() / 2.0f - 60.0f)}, 25.0f, 120.0f, 6),
      ai(Vector2{(GetScreenWidth() - 35.0f), (GetScreenHeight() / 2.0f - 60.0f)}, 25.0f, 120.0f, 6) {
}

// Deconstructor
Game::~Game() {
}

// Function to draw game events to screen
void Game::draw() {
    player.draw();
    ball.draw();
    ai.draw();
}

// Function to handle game IO
void Game::handle_input() {
    if (IsKeyDown(KEY_UP)) {
        player.move_up();
    }
    if (IsKeyDown(KEY_DOWN)) {
        player.move_down();
    }
}

// Function to check collisions events
void Game::check_collision() {
    if (CheckCollisionRecs(player.get_rect(), ball.get_rect()) && ball.speed_x < 0) {
        ball.speed_x = -ball.speed_x;
    }

    if (CheckCollisionRecs(ai.get_rect(), ball.get_rect()) && ball.speed_x > 0) {
        ball.speed_x = -ball.speed_x;
    }
}

// Function to update game events
void Game::update() {
    check_collision();
    ball.update();
}