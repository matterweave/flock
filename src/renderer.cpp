/*
 * Copyright (c) 2011, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "renderer.h"
#include "SDL/SDL.h"

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

