#pragma once
#include <raylib.h>
#include "ball.hpp"
#include "paddle.hpp"
#include "ai.hpp"

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
    void move_ball();
    Ball ball;
    Paddle paddle;
    AI ai;
};