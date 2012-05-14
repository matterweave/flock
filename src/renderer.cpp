/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "renderer.h"
#include "sprite.h"
#include "transform.h"
#ifdef WINDOWS
#include "SDL.h"
#else
#include "SDL/SDL.h"
#endif

/* Constructors & Destructor
------------------------------------------------------------------------------*/

Renderer::Renderer() : height(600), width(800), bitDepth(32) {
    SDL_Init(SDL_INIT_EVERYTHING);
    canvas = SDL_SetVideoMode(width, height, bitDepth, SDL_HWSURFACE);
}

Renderer::~Renderer() {
    SDL_Quit();
}

/* Public Interface
------------------------------------------------------------------------------*/

void Renderer::draw(const Transform &pos, const Sprite &sprite) {
    SDL_Rect dest;
    Mesh2D mesh = sprite.getMesh();

    dest.x = pos.getX();
    dest.y = pos.getY();
    dest.w = mesh.getWidth();
    dest.h = mesh.getHeight();

    SDL_BlitSurface(mesh.data, NULL, canvas, &dest);
}

void Renderer::display() {
    SDL_Flip(canvas);
}
