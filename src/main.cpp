#include <SDL2/SDL.h>
#include <stdio.h>


int main(int argc, char* args[])
{
    SDL_Window* window = NULL;

    SDL_Surface* screenSurface = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL Failed to initialize\n");
        return -1;
    }

    window = SDL_CreateWindow("GEIMU", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 400, SDL_WINDOW_SHOWN);
    if(window == NULL)
    {
        printf("SDL Window failed to be created. SDL_ERROR: %s \n", SDL_GetError());
        return -1;
    }
    
    screenSurface = SDL_GetWindowSurface(window);
    SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );

    SDL_Surface* image = SDL_LoadBMP("assets/red.bmp");
    if(image == NULL)
        printf("IMAGE NOT FOUND\n");

    bool quit = false;

    while(!quit)
    {
        SDL_Event e;

        while(SDL_PollEvent(&e) != 0)
        {
            if(e.type == SDL_QUIT)
                quit = true;
        }
        SDL_BlitSurface(image, NULL, screenSurface, NULL);

        SDL_UpdateWindowSurface(window);
    }



    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
