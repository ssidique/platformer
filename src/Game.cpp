#include "Game.hpp"

Game::Game(Graphics* g)
{
    graphics = g;
    inputHandler = new InputHandler();
}

void Game::run()
{
    Sprite* image = new Sprite(graphics->renderer);
    if(!image->loadFromFile("assets/red.bmp"))
        printf("IMAGE NOT FOUND\n");


    //Game Loop
    while(!inputHandler->isQuit())
    {

        // Poll Inputs
        inputHandler->pollInput();

        // Update

        std::vector<Entity*>::iterator entity;

        /*
        for(entity = objects.begin(); entity < objects.end(); entity++)
        {
            (*entity)->update(*this);
        }


        for(entity = objects.begin(); entity < objects.end(); entity++)
        {
            (*entity)->render(graphics);
        }
        */
        // Render
        SDL_RenderClear(graphics->renderer);

        SDL_RenderCopy(graphics->renderer, image->mTexture, NULL, NULL);
        SDL_RenderPresent(graphics->renderer);

        //SDL_UpdateWindowSurface(graphics->window);
    }


}
