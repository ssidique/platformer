#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

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
        Player(InputHandler* playerInputs);
        void update();
        void render()
        { sprite->render();}
    private:
        PlayerState state; // initialize to STAND
        InputHandler* input;
        Sprite* sprite;

};

#endif
