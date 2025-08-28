// AI.hpp
#pragma once
#include "paddle.hpp"

class AI : public Paddle {
  public:
    // Inherit from Paddle base class
    using Paddle::Paddle;

    // Function to track the balls center
    void set_target_y(float y) { target_y = y; }

    // Override template update method
    void update() override;

  private:
    float target_y = 0.0f;
};