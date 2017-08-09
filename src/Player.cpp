#include "Player.hpp"



Player::Player(InputHandler* playerInputs, Graphics* g)
{
    x = 0;
    y = 0;
    input = playerInputs;

    sprite = new Sprite(g->renderer);
    if(!sprite->loadFromFile("assets/red.bmp"))
        printf("IMAGE NOT FOUND\n");
}

//TODO make a better state machine
void Player::update()
{
    x += 1;
}


