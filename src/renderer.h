/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#ifndef _RENDERER_H_
#define _RENDERER_H_

class Sprite;
class Transform;
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

    /**
     * Draw the mesh to the screen.
     *
     * @param mesh The mesh to draw.
     */
    void draw(const Transform &pos, const Sprite &sprite);

    /**
     * Display the current frame.
     *
     * In reality, this just "flips" the screen, so everything that has been drawn
     * during this loop cycle shows up on the screen.
     */
    void display();

private:
    unsigned int height;
    unsigned int width;
    unsigned int bitDepth;
    SDL_Surface *canvas;
};

#endif // _RENDERER_H_

