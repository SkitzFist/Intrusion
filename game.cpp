#include "game.h"
#include "include/raylib.h"
#include "OnFocus.h"

Game::Game(){
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Intrusion");
    
}

void Game::run(){
    while (!WindowShouldClose())
    {
        update();    
        render();
    }

    CloseWindow();
}

void Game::update(){

}

void Game::render(){
    ClearBackground(BLACK);
    BeginDrawing();
    DrawText("HELLO", WINDOW_WIDTH / 2, WINDOW_HEIGHT/2, 25, WHITE);
    EndDrawing();
}


