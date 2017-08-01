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
        Player();
        void update();
    private:
        PlayerState state; // initialize to STAND
        InputHandler* input;

};

#endif
