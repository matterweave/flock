/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_

struct Transform;

#include <string>

/**
 * Represents an "object", of some sort, within the loaded scene.
 *
 * The GameObject is really a simple, ubiquitous container to keep track of all
 * the "things" loaded into the simluation at the moment. In doing so, they
 * become easier to find, manipulate, and keep track of.
 */
class GameObject {
public:
    /**
     * Construct a GameObject.
     */
    GameObject();

    /**
     * Destroy a GameObject.
     */
    ~GameObject();

private:
    int id;
    std::string name;
    Transform * transform;
};

#endif // _GAMEOBJECT_H_
