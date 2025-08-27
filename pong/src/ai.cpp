#include "ai.hpp"
#include <cmath>

void AI::update() {
    // Simple proportional chase toward target_y
    float center_y = position.y + height * 0.5f;
    float delta = target_y - center_y;

    // Deadzone to avoid jitter
    const float deadzone = 4.0f;
    if (std::fabs(delta) > deadzone) {
        if (delta < 0) move_up();
        else           move_down();
    }
    clamp_to_screen();
}
