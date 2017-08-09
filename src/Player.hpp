#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include "Entity.hpp"
#include "Sprite.hpp"
#include "InputHandler.hpp"
#include "Graphics.hpp"

enum PlayerState
{
    STANDING,
    RUNNING,
    JUMPING,
    FALLING
};

class Player : public Entity
{
    public:
        Player(InputHandler* playerInputs, Graphics* g);
        void update();
        void render()
        { 
            SDL_Rect rect = {0, 0, 30, 30};
            sprite->render(x, y, &rect);
        }
    private:
        PlayerState state; // initialize to STAND
        InputHandler* input;
        Sprite* sprite;
        double x, y; //TODO turn into doubles
        SDL_Rect* spriteClip;

};

#endif
