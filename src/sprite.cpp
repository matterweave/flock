/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "sprite.h"

/* Constructors & Destructor
------------------------------------------------------------------------------*/

Sprite::Sprite(const GameObject &parent, const Mesh2D &mesh)
    : Component("sprite", parent), mesh(mesh)
{}

Sprite::~Sprite() {}

/* Public Interface
------------------------------------------------------------------------------*/

void Sprite::update() {}

const Mesh2D & Sprite::getMesh() {
    return mesh;
}
