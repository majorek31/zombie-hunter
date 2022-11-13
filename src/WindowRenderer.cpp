#include "WindowRenderer.h"

WindowRenderer::WindowRenderer()
{
    this->m_Window = SDL_CreateWindow("Zombie Hunter", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_OPENGL);
    this->m_Renderer = SDL_CreateRenderer(this->m_Window, -1, SDL_RendererFlags::SDL_RENDERER_ACCELERATED);
}

void WindowRenderer::Render(Game* game) {
    SDL_SetRenderDrawColor(this->m_Renderer, 255, 255, 255, 255);
    
    SDL_RenderClear(this->m_Renderer);
    SDL_RenderPresent(this->m_Renderer);
}

WindowRenderer::~WindowRenderer()
{
    SDL_DestroyRenderer(this->m_Renderer);
    SDL_DestroyWindow(this->m_Window);
}
