/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "gameobject.h"

/* Constructors & Destructor
------------------------------------------------------------------------------*/

GameObject::GameObject() {
    //transform = new Transform(0, 0, 0);
}

GameObject::GameObject(coord x, coord y) {}

GameObject::GameObject(coord x, coord y, int z) {
    //transform = new Transform(x, y, z);
}

GameObject::~GameObject() {
    //delete transform;
}
