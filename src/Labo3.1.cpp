#include "iostream"
#include "raylib.h"

void Labo3_1(void){
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Lab3.1Raylib");
    SetTargetFPS(60);

    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircle(screenWidth/5*2, 290, 60, MAROON);
        DrawCircle(screenWidth/5*3, 290, 60, MAROON);
        DrawCircle(screenWidth/5*2.5, 225, 120, PINK);
        DrawCircle(screenWidth/5*1.8, 200, 50, PINK);
        DrawCircle(screenWidth/5*3.2, 200, 50, PINK);
        DrawCircle(screenWidth/5*2.5, 200, 5, DARKBROWN);
        DrawCircle(screenWidth/5*2.35, 165, 8, DARKBROWN);
        DrawCircle(screenWidth/5*2.65, 165, 8, DARKBROWN);
        DrawCircle(screenWidth/5*2.35, 185, 8, DARKBROWN);
        DrawCircle(screenWidth/5*2.65, 185, 8, DARKBROWN);
        DrawRectangle(screenWidth/5*2.65-8, 168, 16, 16, DARKBROWN);
        DrawRectangle(screenWidth/5*2.35-8, 168, 16, 16, DARKBROWN);
        DrawCircle(screenWidth/5*2.65, 165, 6, LIGHTGRAY);
        DrawCircle(screenWidth/5*2.35, 165, 6, LIGHTGRAY);
        DrawCircle(screenWidth/5*2.65, 185, 6, BLUE);
        DrawCircle(screenWidth/5*2.35, 185, 6, BLUE);
        DrawCircle(screenWidth/5*2.65, 180, 6, DARKBROWN);
        DrawCircle(screenWidth/5*2.35, 180, 6, DARKBROWN);
        EndDrawing();
    }
    CloseWindow();
}
