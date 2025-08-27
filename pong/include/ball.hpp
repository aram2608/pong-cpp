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

    int speed_x;
    int speed_y;
    float radius;
    float diameter;

  private:
    Vector2 position;
};