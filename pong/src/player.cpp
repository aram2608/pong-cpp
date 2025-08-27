#include "player.hpp"

void Player::update() {
    if (IsKeyDown(KEY_UP)) {
        move_up();
    }
    if (IsKeyDown(KEY_DOWN)) {
    move_down();
    }
    clamp_to_screen();
}