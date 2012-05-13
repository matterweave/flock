/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_

class Sprite;
class Transform;

#include "types.h"

#include <string>

/**
 * Represents an "object", of some sort, within the loaded scene.
 *
 * The GameObject is really a simple, ubiquitous container to keep track of all
 * the "things" loaded into the simluation at the moment. In doing so, they
 * become easier to find, manipulate, and keep track of.
 *
 * Every GameObject has a Transform (for ease), but all other components are optional
 * and added at level load or dynamically during the game. The constructors reflect these
 * design decisions.
 */
class GameObject {
public:
    /**
     * Construct a GameObject.
     */
    GameObject();

    /**
     * Construct a GameObject with a position.
     *
     * @param x The x position of the object.
     * @param y The y position of the object.
     */
    GameObject(coord x, coord y);

    /**
     * Construct a GameObject with a position and a layer (z).
     *
     * @param x The x position of the object.
     * @param y The y position of the object.
     * @param z The layer of the object. May be between 0 and the maximum layer configured.
     */
    GameObject(coord x, coord y, int z);

    /**
     * Destroy a GameObject.
     */
    ~GameObject();

private:
    int id;
    std::string name;
    Transform *transform;
    Sprite *sprite;
};

#endif // _GAMEOBJECT_H_
