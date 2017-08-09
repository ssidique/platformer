#ifndef __SPRITE_HPP__
#define __SPRITE_HPP__

#include <SDL2/SDL.h>
#include <string>

class Sprite {
    public:
        Sprite(SDL_Renderer* r);
        bool loadFromFile(std::string path);
        void free();
        void render(int x, int y, SDL_Rect* clip);

        int getWidth()
        { return mWidth; }
        int getHeight()
        { return mHeight; }

        SDL_Texture* mTexture;
    private:
        SDL_Renderer* renderer;
        int mWidth;
        int mHeight;
};

#endif
