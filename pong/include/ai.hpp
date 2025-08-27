// AI.hpp
#pragma once
#include "paddle.hpp"

class AI : public Paddle {
  public:
    // Inherit from Paddle base class
    using Paddle::Paddle;

    // Override template update method
    void update() override;

  private:
    float target_y = 0.0f;
    float reaction = 0.9f;
};