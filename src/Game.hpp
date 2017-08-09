#ifndef __GAME_HPP__
#define __GAME_HPP__


#include <SDL2/SDL.h>
#include <vector>
#include "InputHandler.hpp"
#include "Graphics.hpp"
#include "Entity.hpp"
#include "Sprite.hpp"
#include "Player.hpp"

class Game
{
    public:
        Game(Graphics* g);
        void run();
    private:
        InputHandler* inputHandler;
        Graphics* graphics;
        std::vector<Entity*> objects;
};
#endif
