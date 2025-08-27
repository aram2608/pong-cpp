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

    Rectangle get_rect();

  private:
    Vector2 position;

    float height;
    float width;
};