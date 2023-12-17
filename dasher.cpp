#include "raylib.h"
int main()
{
    const int windowWidth{800};
    const int windowHeight{600};
    InitWindow(windowWidth, windowHeight, "Dapper Dasher!");

    //Rectangle dimensions
    const int width{50};
    const int height{80};

    int posY{windowHeight - height};
    int velocity{-10};

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        //Start drawing
        BeginDrawing();
        ClearBackground(WHITE);
        
        
        
        
        //stop drawing
        EndDrawing();
    }
    CloseWindow();
}