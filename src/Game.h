#pragma once
#include "WindowRenderer.h"

class WindowRenderer;

class Game
{
public:
    Game();
    ~Game();
    void Loop();

    void HandleEvents();
    void Update();
    void Render();
private:
    WindowRenderer* m_WindowRenderer = nullptr;
    bool m_bIsRunning = true;
public:
    SDL_Event lastEvent;
};