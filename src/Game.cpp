#include "Game.h"

Game::Game()
{
    this->m_WindowRenderer = new WindowRenderer();
}

void Game::Loop() {
    while (this->m_bIsRunning)
    {
        this->HandleEvents();

        this->Update();

        this->Render();
    }
}

void Game::HandleEvents() {
    SDL_PollEvent(&this->lastEvent);
}
void Game::Update() {
    if (this->lastEvent.type == SDL_EventType::SDL_QUIT)
        this->m_bIsRunning = false;
    
}
void Game::Render() {
    this->m_WindowRenderer->Render(this);
}

Game::~Game()
{
    delete this->m_WindowRenderer;
}
