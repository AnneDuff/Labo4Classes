#include "iostream"
#include "raylib.h"

void Labo3_2(void){
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Lab3.2Raylib");
    SetTargetFPS(60);

    Vector2 squareMovement = {(float)screenWidth/2, (float)screenHeight/2};

    int posx = 375;
    int posy = 200;

    while (!WindowShouldClose()){
        if (posx > 800){
            posx = 0;
        }
        if (posx < 0){
            posx = 800;
        }
        if (posy > 450){
            posy = 0;
        }
        if (posy < 0){
            posy = 450;
        }
        if (IsKeyDown(KEY_RIGHT)) posx+=5;
        if (IsKeyDown(KEY_LEFT)) posx-=5;
        if (IsKeyDown(KEY_UP)) posy-=5;
        if (IsKeyDown(KEY_DOWN)) posy+=5;

            BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawRectangle(posx, posy, 50, 50, DARKBLUE);
            EndDrawing();
        }
        CloseWindow();
    }