#pragma once
#include <raylib.h>

class AI {
  public:
    AI();
    ~AI();
    // Function to draw paddl to screen
    void draw();
    void move_up();
    void move_down();

    Rectangle get_rect();

  private:
    Vector2 position;
};