/*
 * Copyright (c) 2011, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#ifndef _RENDERER_H_
#define _RENDERER_H_

struct SDL_Surface;

/**
 * Contains methods for rendering to the main graphics
 * window.
 */
class Renderer
{
    public:
        Renderer();
        ~Renderer();

    private:
        unsigned int height;
        unsigned int width;
        unsigned int bitDepth;
        SDL_Surface *canvas;
};

#endif // _RENDERER_H_

