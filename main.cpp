#include <iostream>
#include "SDL.h"

void initSDL2() {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        SDL_Log("%s", SDL_GetError());
    }
}

int main(int argv, char *args[]) {
    initSDL2();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
