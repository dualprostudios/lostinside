#include "Engine.h"
#include "SDL/SDL.h"

Engine::Engine()
{

}

void Engine::init()
{

}

bool Engine::createWindow()
{
    SDL_Surface* screen = NULL;
    SDL_Surface* layer1 = NULL;
    SDL_Surface* layer2 = NULL;
    SDL_Surface* sprite = NULL;

    SDL_Init( SDL_INIT_EVERYTHING );

    screen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE);
    if(layer1 = SDL_LoadBMP("tilesheet1.bmp"))
    {
        //Add debug class then make it output to a text file.
    }
    else
    {
        //Add debug class then make it output to a text file.
    }

    if(layer2 = SDL_LoadBMP("tilesheet1.bmp"))
    {
        //Add debug class then make it output to a text file.
    }
    else
    {
        //Add debug class then make it output to a text file.
    }

    if(sprite = SDL_LoadBMP("tilesheet2.bmp"))
    {
        //Add debug class then make it output to a text file.
    }
    else
    {
        //Add debug class then make it output to a text file.
    }


}
