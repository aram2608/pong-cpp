#pragma once
#include "ai.hpp"
#include "ball.hpp"
#include "paddle.hpp"

#include <raylib.h>

enum class GameState { Title, Active, Paused, GameOver };

class Game {
  public:
    Game();
    ~Game();
    void update();
    void draw();
    void handle_input();

    void check_collision();

  private:
    Ball   ball;
    Paddle paddle;
    AI     ai;
};