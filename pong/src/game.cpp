#include "game.hpp"
#include <cmath>

// Constructor
Game::Game() {
    Ball   ball;
    Paddle player;
    Paddle     ai;
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