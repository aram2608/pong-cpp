// Player.hpp
#pragma once
#include "paddle.hpp"

class Player : public Paddle {
  public:
    // Inherit from Paddle base class
    using Paddle::Paddle;
    // Override template update method
    void update() override;
};
