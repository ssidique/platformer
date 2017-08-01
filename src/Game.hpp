#ifndef __GAME_HPP__
#define __GAME_HPP__


#include <SDL2/SDL.h>
#include "InputHandler.hpp"
#include "Graphics.hpp"

class Game
{
    public:
        Game(Graphics* g);
        void run();
    private:
        InputHandler* inputHandler;
        Graphics* graphics;
};
#endif
