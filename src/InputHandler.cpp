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
        else if(e.type == SDL_KEYDOWN)
        {
            switch(e.key.keysym.sym)
            {
                case SDLK_UP:
                    player->up();
                    break;
                case SDLK_DOWN:
                    player->down();
                    break;
                case SDLK_LEFT:
                    player->left();
                    break;
                case SDLK_RIGHT:
                    player->right();
                    break;
            }
        }
    }
}

bool InputHandler::isQuit()
{
    return quit;
}
