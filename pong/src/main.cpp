#include <iostream>
#include <raylib.h>
#include "game.hpp"

int main() {
    // Hard coded screen size
    const int screen_w = 1280;
    const int screen_h = 800;

    // Middle X coordinate
    float mid_x = screen_w / 2.0f;

    // Create our game class instance
    Game game;

    // Initialize the game window, cap FPS to stop game from being jumpy
    InitWindow(screen_w, screen_h, "C++ - Pong");
    SetTargetFPS(60);

    // Navy blue background
    Color BG = Color({0, 38, 70, 255});

    // Game loop remains on while X is not hit or escape key pressed
    while(!WindowShouldClose()) {

        game.handle_input();
        game.update();

        BeginDrawing();
            ClearBackground(BG);
            DrawLineEx({ mid_x, 0 }, { mid_x, (float)screen_h }, 2.0f, WHITE);

            game.draw();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}