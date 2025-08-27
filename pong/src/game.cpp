#include "game.hpp"

// Constructor
Game::Game() {
    Ball ball;
    Paddle paddle;
    AI ai;
}

// Deconstructor
Game::~Game() {

}

// Fucntion to draw game events to screen
void Game::draw() {
    paddle.draw();
    ball.draw();
    ai.draw();
}

void Game::draw_ai() {
    ai.draw();
}

void Game::handle_input() {
    if(IsKeyDown(KEY_UP)) paddle.move_up();
    if(IsKeyDown(KEY_DOWN)) paddle.move_down();
}

void Game::check_collision() {
    if(CheckCollisionRecs(ball.get_rect(), paddle.get_rect())) {
        ball.speed = 2;
    }
    if(CheckCollisionRecs(ball.get_rect(), ai.get_rect())) {
        ball.speed = -2;
    }
}

void Game::update() {
    check_collision();
    move_ball();
}

void Game::move_ball() {
    ball.update();
}