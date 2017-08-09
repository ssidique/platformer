#include "Sprite.hpp"

Sprite::Sprite(SDL_Renderer* r)
{
    renderer = r;
    mTexture = NULL;
    mWidth = 0;
    mHeight = 0;
}

bool Sprite::loadFromFile(std::string path)
{
    SDL_Surface* loadedSurface = SDL_LoadBMP(path.c_str());
    if(loadedSurface == NULL)
        return false;
    mTexture = SDL_CreateTextureFromSurface(renderer, loadedSurface);
    SDL_FreeSurface(loadedSurface);
    if(mTexture == NULL)
        return false;
    return true;
}
