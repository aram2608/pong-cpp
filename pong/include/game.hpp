#pragma once
#include <raylib.h>
#include "ball.hpp"
#include "paddle.hpp"

class Game {
    public:
        Game();
        ~Game();
        void update();
        void draw();
        void handle_input();

    private:
    void move_ball();
    Ball ball;
    Paddle paddle;
};