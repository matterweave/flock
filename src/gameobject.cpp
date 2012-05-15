/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "gameobject.h"
#include "component.h"
#include "renderer.h"
#include "sprite.h"
#include "transform.h"
#include "logog/logog.hpp"

/* Constructors & Destructor
------------------------------------------------------------------------------*/

GameObject::GameObject() {
    transform = new Transform(*this);
}

GameObject::GameObject(coord x, coord y) {
    transform = new Transform(*this, x, y);
}

GameObject::GameObject(coord x, coord y, int z) {
    transform = new Transform(*this, x, y, z);
}

GameObject::~GameObject() {
    if (transform != NULL)
        delete transform;
    if (sprite != NULL)
        delete sprite;
}

/* Public Interface
------------------------------------------------------------------------------*/

void GameObject::addComponent(Component *component) {
    // TODO: This needs to check for duplicate components
    components.push_back(ComponentPtr(component));
}

void GameObject::removeComponent(std::string name) {
    // TODO: Is there a more efficient way to handle this?
    ComponentIter iter = findComponent(name);

    components.erase(iter);
}

Component & GameObject::getComponent(std::string name) {
    ComponentIter iter = findComponent(name);

    return *(iter->get());
}

void GameObject::render(Renderer &canvas) const {
    // Later on, animations that are currently playing should draw first
    if (sprite != NULL) {
        canvas.draw(*transform, *sprite);
    }
}

void GameObject::update() {}

/* Private Methods
------------------------------------------------------------------------------*/

ComponentIter GameObject::findComponent(std::string name) {
    {
        using namespace std;

        ComponentIter iter;
        for (iter = components.begin(); iter < components.end(); ++iter) {
            if ((*iter)->getName() == name)
                return iter;
        }
    }
}
