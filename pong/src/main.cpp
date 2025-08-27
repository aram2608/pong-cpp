#include "game.hpp"

#include <iostream>
#include <raylib.h>

int main() {
    // Hard coded screen size
    const int screen_w = 1280;
    const int screen_h = 800;

    // Middle X coordinate
    float mid_x = screen_w / 2.0f;

    // Initialize the game window, cap FPS to stop game from being jumpy
    InitWindow(screen_w, screen_h, "C++ - Pong");
    SetTargetFPS(60);

    // Create our game class instance
    Game game;

    // Navy blue background
    Color BG = Color({0, 38, 70, 255});

    // Game loop remains on while X is not hit or escape key pressed
    while (!WindowShouldClose()) {

        // Handle game IO/events
        game.update();
        game.handle_input();

        // Drawing functions
        BeginDrawing();

        // Draws a clear background to flush out trailing drawings
        ClearBackground(BG);

        // Line to distinguish have of the game board
        DrawLineEx({mid_x, 0}, {mid_x, (float) screen_h}, 2.0f, WHITE);

        // Draw game events
        game.draw();

        // Clean up drawing after game loop finishes
        EndDrawing();
    }

    // Uninitialize game window
    CloseWindow();
    return 0;
}