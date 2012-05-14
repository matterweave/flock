/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "transform.h"
#include "gameobject.h"

/* Constructors & Destructor
------------------------------------------------------------------------------*/

Transform::Transform(const GameObject &parent)
    : Component("transform", parent), x(0), y(0), z(0)
{}

Transform::Transform(const GameObject &parent, coord x, coord y)
    : Component("transform", parent), x(x), y(y), z(0)
{}

Transform::Transform(const GameObject &parent, coord x, coord y, int z)
    : Component("transform", parent), x(x), y(y), z(z)
{}

/* Public Interface
------------------------------------------------------------------------------*/

void Transform::update() {
    
}

coord Transform::getX() const {
    return x;
}

coord Transform::getY() const {
    return y;
}

int Transform::getZ() const {
    return z;
}

void Transform::setX(coord x) {
    this->x = x;
}

void Transform::setY(coord y) {
    this->y = y;
}

void Transform::setZ(int z) {
    this->z = z;
}
