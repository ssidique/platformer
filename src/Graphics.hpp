#ifndef __GRAPHICS_HPP__
#define __GRAPHICS_HPP__


#include <SDL2/SDL.h>
#include "Entity.hpp"

class Graphics
{
    public:
        Graphics(SDL_Window* w, SDL_Renderer* s);
        void update(Entity& entity);
        SDL_Window* window;
        SDL_Renderer* renderer;

};

#endif
