/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#ifndef _MESH2D_H_
#define _MESH2D_H_

#include <string>

struct SDL_Surface;

class Mesh2D {
public:
    Mesh2D(std::string path);
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
