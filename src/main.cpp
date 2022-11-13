#include <iostream>
#include "Game.h"

int main() {
    SDL_Init(SDL_INIT_EVERYTHING);
    Game game;
    game.Loop();
}