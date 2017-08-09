#ifndef __SPRITE_HPP__
#define __SPRITE_HPP__

#include <SDL2/SDL.h>
#include <string>

class Sprite {
    public:
        Sprite(SDL_Renderer* r);
        bool loadFromFile(std::string path);
        void free();
        void render(double x, double y, SDL_Rect* clip);

        double getWidth()
        { return mWidth; }
        double getHeight()
        { return mHeight; }

        SDL_Texture* mTexture;
    private:
        SDL_Renderer* renderer;
        double mWidth;
        double mHeight;
};

#endif
