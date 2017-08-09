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
    mWidth = loadedSurface->w;
    mHeight = loadedSurface->h;
    return true;
}

void Sprite::render(int x, int y, SDL_Rect* clip)
{
    SDL_Rect renderQuad = { x, y, mWidth, mHeight};
    if(clip != NULL)
    {
        renderQuad.w = clip->w;
        renderQuad.h = clip->h;
    }
    SDL_RenderCopy( renderer, mTexture, clip, &renderQuad );
}
