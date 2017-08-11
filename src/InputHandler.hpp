#ifndef __INPUT_HANDLER_HPP__
#define __INPUT_HANDLER_HPP__


#include <SDL2/SDL.h>

#include "Player.hpp"

class Player;

class InputHandler
{
    public:
        InputHandler();
        void pollInput();
        bool isQuit();
        void attachPlayer(Player* p)
        { player = p; }
    private:
        bool quit;
        Player* player;
};

#endif
