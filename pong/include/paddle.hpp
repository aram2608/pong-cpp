#pragma once
#include <raylib.h>

class Paddle {
  public:
    // Constructor
    Paddle(Vector2 position, float width, float height, int speed);
    // Deconstructor - virtual so we can override with other classes and deleting via Paddle* is
    // safe
    virtual ~Paddle();
    // Function to draw paddl to screen
    void draw();
    void move_up();
    void move_down();

    Rectangle get_rect();

  private:
    Vector2 position;

    float height;
    float width;
    int   speed;
};