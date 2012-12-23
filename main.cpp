/* 
main.cpp
This project uses SDL and OpenGL in order to function, so if you are going to compile the sources, make sure you
include the .dll's required! 
*/
#include "SDL/SDL.h"
#include <iostream>
#include <fstream>

int main( int argc, char* args[])
{
    //Debug
    std::ofstream DEBUG_LOG;
    DEBUG_LOG.open ("DEBUG_LOG.txt");

    DEBUG_LOG << "Initializing surfaces...\n\n";
    SDL_Surface* hworld = NULL;
    SDL_Surface* screen = NULL;
    DEBUG_LOG << "Surfaces initiated.\n\n";

    DEBUG_LOG << "Initializing everything SDL based...\n\n";
    SDL_Init( SDL_INIT_EVERYTHING );
    DEBUG_LOG << "Everything SDL based initialized.\n\n";

    DEBUG_LOG << "Setting and loading surface properties...\n\n";
    screen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE );
    if (hworld = SDL_LoadBMP("world.bmp"))
    {
        DEBUG_LOG << "Set and loaded surface properties.\n\n";
    }
    else
    {
        DEBUG_LOG << "ERROR: COULD NOT LOAD BMP\n\n";
    }
    DEBUG_LOG << "Displaying surfaces...\n\n";
    SDL_BlitSurface( hworld, NULL, screen, NULL);
    DEBUG_LOG << "Displayed surfaces.\n\n";

    DEBUG_LOG << "Updating screen...\n\n";
    SDL_Flip( screen );
    DEBUG_LOG << "Screen updated.\n\n";

    DEBUG_LOG << "Keeping window open for 2 seconds...\n\n";
    SDL_Delay( 2000 );
    DEBUG_LOG << "Window closed.\n\n";

    DEBUG_LOG << "Freeing surface...\n\n";
    SDL_FreeSurface( hworld );
    DEBUG_LOG << "Surface freed.\n\n";

    DEBUG_LOG << "Quitting SDL...\n\n";
    SDL_Quit();
    DEBUG_LOG << "SDL has quit." << std::endl;
    DEBUG_LOG.close();

    return 0;
}
