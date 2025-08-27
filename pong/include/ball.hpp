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
    void update();

    Rectangle get_rect();

    float   speed_x;
    float   speed_y;
    float radius;
    float diameter;
    Vector2 position;

  private:
};