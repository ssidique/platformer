#include "Game.hpp"

Game::Game(Graphics* g)
{
    graphics = g;
    inputHandler = new InputHandler();
}

void Game::run()
{


    Player* player = new Player(inputHandler, graphics);

    //Game Loop
    while(!inputHandler->isQuit())
    {

        SDL_RenderClear(graphics->renderer);

        // Poll Inputs
        inputHandler->pollInput();

        // Update

        std::vector<Entity*>::iterator entity;

        /*
        for(entity = objects.begin(); entity < objects.end(); entity++)
        {
            (*entity)->update(*this);
        }

        // Render

        for(entity = objects.begin(); entity < objects.end(); entity++)
        {
            (*entity)->render(graphics);
        }
        */

        player->update();
        player->render();

    
    

        SDL_RenderPresent(graphics->renderer);

        //SDL_UpdateWindowSurface(graphics->window);
    }


}
