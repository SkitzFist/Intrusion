#pragma once
#include "FocusManager.h"
#include "Console.h"

class Game {
public:
    Game();
    void run();
private:
    const int WINDOW_WIDTH = 1280;
    const int WINDOW_HEIGHT = 720;

    FocusManager m_focusManager;
    Console m_console;

    void update();
    void render();
};