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

    // Template method for paddle movement
    virtual void update() = 0;

    Rectangle get_rect();

  protected:
    Vector2 position;
    void clamp_to_screen();
    void move_up();
    void move_down();

    float height;
    float width;
    int   speed;
};