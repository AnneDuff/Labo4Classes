#include "iostream"
#include "raylib.h"

void Labo3_3(void){
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Lab3.3Raylib");
    SetTargetFPS(60);

    SetConfigFlags(FLAG_MSAA_4X_HINT);

    Vector2 ballPos = {GetScreenWidth()/2.0f, GetScreenHeight()/2.0f};
    Vector2 ballSpeed = {5.0f, 4.0f};
    int ballSize = 15;

    while (!WindowShouldClose()){
        ballPos.x += ballSpeed.x;
        ballPos.y += ballSpeed.y;
        if ((ballPos.x >= (GetScreenWidth() - ballSize)) || (ballPos.x <= ballSize)) ballSpeed.x *= -1.0f;
        if ((ballPos.y >= (GetScreenHeight() - ballSize)) || (ballPos.y <= ballSize)) ballSpeed.y *= -1.0f;
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircleV(ballPos, (float)ballSize, DARKBLUE);
        DrawFPS(10, 10);
        EndDrawing();
    }
    CloseWindow();
}