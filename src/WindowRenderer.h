#pragma once
#include <SDL2/SDL.h>
#include "Game.h"

class Game;

class WindowRenderer
{
public:
    WindowRenderer();
    ~WindowRenderer();
    void Render(Game* game);
private:
    SDL_Renderer* m_Renderer;
    SDL_Window* m_Window;
};