#pragma once
#include "ai.hpp"
#include "ball.hpp"
#include "player.hpp"

#include <raylib.h>

enum class GameState { Title, Active, Paused, GameOver };

class Game {
  public:
    Game();
    ~Game();
    void update();
    void draw();

    void check_collision();

    void register_score();

    int player_score;
    int ai_score;

  private:
    Ball   ball;
    Player player;
    AI     ai;
};