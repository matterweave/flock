/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "component.h"
#include "gameobject.h"

/* Constructors & Destructor
------------------------------------------------------------------------------*/

Component::Component(const char *name, GameObject &parent)
    : name(name), parent(parent)
{}

Component::~Component() {}

/* Public Interface
------------------------------------------------------------------------------*/

const char * Component::getName() const {
    return name;
}

GameObject & Component::getParent() const {
    return parent;
}
