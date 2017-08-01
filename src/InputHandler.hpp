#ifndef __INPUT_HANDLER_HPP__
#define __INPUT_HANDLER_HPP__


#include <SDL2/SDL.h>

class InputHandler
{
    public:
        InputHandler();
        void pollInput();
        bool isQuit();
    private:
        bool quit;

};

#endif
