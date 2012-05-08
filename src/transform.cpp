/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "transform.h"

/* Constructors & Destructor
------------------------------------------------------------------------------*/

Transform::Transform() : x(0), y(0), z(0) {}

Transform::Transform(coord x, coord y) : x(x), y(y), z(0) {}

Transform::Transform(coord x, coord y, int z) : x(x), y(y), z(z) {}

/* Public Interface
------------------------------------------------------------------------------*/

coord Transform::getX() {
    return x;
}

coord Transform::getY() {
    return y;
}

int Transform::getZ() {
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
