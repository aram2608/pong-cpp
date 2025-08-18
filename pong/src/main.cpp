#include <iostream>
#include <raylib.h>

int main() {
    InitWindow(1000, 600, "c++ - Pong");

    while(!WindowShouldClose()) {
        BeginDrawing();



        EndDrawing();
    }
    CloseWindow();
    return 0;
}