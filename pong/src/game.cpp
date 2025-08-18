#include "game.hpp"

// Constructor
Game::Game() {
    Ball ball;
}

// Deconstructor
Game::~Game() {

}

// Fucntion to draw game events to screen
void Game::draw() {
    paddle.draw();
    ball.draw();
}

void Game::handle_input() {
    if(IsKeyDown(KEY_UP)) paddle.move_up();
    if(IsKeyDown(KEY_DOWN)) paddle.move_down();
}

void Game::update() {
    move_ball();
}

void Game::move_ball() {
    ball.update(0.05f);
}