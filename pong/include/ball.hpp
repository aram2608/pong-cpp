#pragma once
#include <raylib.h>

class Ball {
    public:
        // Constructor
        Ball();
        // Deconstructor
        ~Ball();

        // Function to draw the ball to the screen
        void draw();

        // Function to update ball position
        void update(float spd);

    private:
    Vector2 position;
    float speed;
};