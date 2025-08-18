#include <iostream>
#include <raylib.h>
#include "game.hpp"

int main() {
    int screen_w = 1000;
    int screen_h = 600;
    // Middle X coordinate
    float mid_x = screen_w / 2.0f;

    Game game;

    InitWindow(screen_w, screen_h, "c++ - Pong");
    // Navy blue
    Color BG = Color({0, 38, 70, 255});

    while(!WindowShouldClose()) {

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