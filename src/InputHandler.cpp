#include "InputHandler.hpp"


InputHandler::InputHandler()
{
    quit = false;
}
void InputHandler::pollInput()
{
    SDL_Event e;

    while(SDL_PollEvent(&e) != 0)
    {
        if(e.type == SDL_QUIT)
            quit = true;
    }
}

bool InputHandler::isQuit()
{
    return quit;
}
