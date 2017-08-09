#include <SDL2/SDL.h>
#include <stdio.h>
#include "Game.hpp"
#include "Graphics.hpp"
#include "InputHandler.hpp"


SDL_Window* initWindow()
{

    SDL_Window* window = NULL;


    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL Failed to initialize\n");
        return NULL;
    }

    window = SDL_CreateWindow("GEIMU", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 400, SDL_WINDOW_SHOWN);
    if(window == NULL)
    {
        printf("SDL Window failed to be created. SDL_ERROR: %s \n", SDL_GetError());
        return NULL;
    }
    

}
int main(int argc, char* args[])
{
    SDL_Window* window = initWindow();
    if(window == NULL)
        return -1;

    SDL_Renderer* gRenderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
    /*
    SDL_Surface* screenSurface = NULL;
    screenSurface = SDL_GetWindowSurface(window);
    SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );
    bool quit = false;
    */

    Graphics* graphics = new Graphics(window, gRenderer);
    Game* game = new Game(graphics);

    game->run();


    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
