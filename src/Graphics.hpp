#ifndef __GRAPHICS_HPP__
#define __GRAPHICS_HPP__


#include <SDL2/SDL.h>

class Graphics
{
    public:
        Graphics(SDL_Window* w, SDL_Surface* s);
        SDL_Window* window;
        SDL_Surface* screenSurface;
};

#endif
