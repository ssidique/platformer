#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include "Entity.hpp"
#include "Sprite.hpp"
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
        Player(Graphics* g);
        void update();
        void render()
        { 
            SDL_Rect rect = {0, 0, 30, 30};
            sprite->render(x, y, &rect);
        }
        void up();
        void down();
        void left();
        void right();
    private:
        PlayerState state; // initialize to STAND
        Sprite* sprite;
        double x, y; //TODO turn into doubles
        SDL_Rect* spriteClip;

};

#endif
