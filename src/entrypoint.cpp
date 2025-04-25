#include "entrypoint.h"
#include "iostream"
#include "raylib.h"
#include "Labo3.1.cpp"
#include "Labo3.2.cpp"
#include "Labo3.3.cpp"



void raylib_start(void){
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "LabsRaylib");
    SetTargetFPS(60);

    while (!WindowShouldClose()){
        BeginDrawing();
        DrawText("Lab 3.1: Q", 5, 5, 36, BLACK);
        DrawText("Lab 3.2: W", 5, 50, 36, BLACK);
        DrawText("Lab 3.3: E", 5, 95, 36, BLACK);
        ClearBackground(RAYWHITE);
        if(IsKeyDown(KEY_Q)){
            Labo3_1();
        }

        if(IsKeyDown(KEY_W)){
            Labo3_2();
        }

        if(IsKeyDown(KEY_E)){
            Labo3_3();
        }
        EndDrawing();
    }
    CloseWindow();
}

