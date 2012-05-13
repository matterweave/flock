/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "sprite.h"

/* Constructors & Destructor
------------------------------------------------------------------------------*/

Sprite::Sprite(const GameObject &parent)
    : Component("sprite", parent)
{}

Sprite::~Sprite() {}

/* Public Interface
------------------------------------------------------------------------------*/

void Sprite::render(Renderer &canvas) {
    // Draw to renderer
}

void Sprite::update() {}
