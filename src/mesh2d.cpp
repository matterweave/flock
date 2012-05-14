/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "mesh2d.h"

#include "logog/logog.hpp"
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

/* Constructors & Destructor
------------------------------------------------------------------------------*/

Mesh2D::Mesh2D(std::string path) : filepath(path) {
    data = IMG_Load(path.c_str());

    if (data == NULL)
        ERR("Failed to initialize mesh at: %s", path.c_str());
}

Mesh2D::~Mesh2D() {
    if (data != NULL)
        SDL_FreeSurface(data);
}

/* Public Interface
------------------------------------------------------------------------------*/

std::string Mesh2D::getFilePath() {
    return filepath;
}
