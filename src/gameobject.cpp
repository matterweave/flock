/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "gameobject.h"
#include "transform.h"

/* Constructors & Destructor
------------------------------------------------------------------------------*/

GameObject::GameObject() {
    transform = new Transform();
}

GameObject::GameObject(coord x, coord y) {
    transform = new Transform(x, y);
}

GameObject::GameObject(coord x, coord y, int z) {
    transform = new Transform(x, y, z);
}

GameObject::~GameObject() {
    if (transform != NULL)
        delete transform;
    if (sprite != NULL)
        delete sprite;
}
