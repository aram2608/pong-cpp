#pragma once
#include <raylib.h>

class Paddle {
    public:
        // Constructor
        Paddle();
        // Deconstructor
        ~Paddle();
        // Function to draw paddl to screen
        void draw();
        void move_up();
        void move_down();
    private:
    Vector2 position;
};