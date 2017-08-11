#include "Player.hpp"



Player::Player(Graphics* g)
{
    x = 0;
    y = 0;

    sprite = new Sprite(g->renderer);
    if(!sprite->loadFromFile("assets/red.bmp"))
        printf("IMAGE NOT FOUND\n");
}

//TODO make a better state machine
void Player::update()
{
    //x += 0.1;
}


void Player::up()
{
    y += 5;
}

void Player::down()
{
    y -= 5;
}

void Player::left()
{
    x -= 5;
}
void Player::right()
{
    x += 5;
}
