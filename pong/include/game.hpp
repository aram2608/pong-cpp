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
    void draw_ai();
    void handle_input();

    void check_collision();

  private:
    void   move_ball();
    Ball   ball;
    Paddle paddle;
    AI     ai;
};