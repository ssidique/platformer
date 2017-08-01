#include "Game.hpp"

Game::Game(Graphics* g)
{
    graphics = g;
    inputHandler = new InputHandler();
}

void Game::run()
{


    SDL_Surface* image = SDL_LoadBMP("assets/red.bmp");
    if(image == NULL)
        printf("IMAGE NOT FOUND\n");


    //Game Loop
    while(!inputHandler->isQuit())
    {

        // Poll Inputs
        inputHandler->pollInput();

        // Update



        // Render
        SDL_BlitSurface(image, NULL, graphics->screenSurface, NULL);

        SDL_UpdateWindowSurface(graphics->window);
    }


}
