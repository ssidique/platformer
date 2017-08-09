#ifndef __ENTITY_HPP__
#define __ENTITY_HPP__

//class Game;
class Entity 
{
    public:
        virtual void update()=0;
        virtual void render()=0;
};

#endif
