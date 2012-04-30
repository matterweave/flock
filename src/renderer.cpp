/*
 * Copyright (c) 2011, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "renderer.h"
#ifdef WINDOWS
#include "SDL.h"
#else
#include "SDL/SDL.h"
#endif

/* Constructors & Destructor
------------------------------------------------------------------------------*/

Renderer::Renderer() : height(600), width(800), bitDepth(32)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    canvas = SDL_SetVideoMode(width, height, bitDepth, SDL_HWSURFACE);
}

Renderer::~Renderer()
{
    SDL_Quit();
}

