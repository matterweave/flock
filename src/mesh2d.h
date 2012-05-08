/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#ifndef _MESH2D_H_
#define _MESH2D_H_

#include <string>

struct SDL_Surface;

/**
 * A Mesh2D resource represents a renderable image.
 *
 * The resource is not directly included into an object for rendering. Instead, the resource acts
 * as a reference for sharing an image. Therefore, each Mesh2D is generally unique across the
 * running game.
 */
class Mesh2D {
public:
    /**
     * Construct a Mesh2D with a file path.
     *
     * @param path The physical location of the resource.
     */
    Mesh2D(std::string path);

    /**
     * Destroy the Mesh2D.
     */
    ~Mesh2D();

    /**
     * Get the absolute file path of this resource.
     *
     * @return The physical file path of the resource.
     */
    std::string getFilePath();

private:
    std::string filepath;
    SDL_Surface *data;

    // No copies
    Mesh2D(const Mesh2D &copy);
    Mesh2D & operator=(const Mesh2D &rhs);
};

#endif // _MESH2D_H_
