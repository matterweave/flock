/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_

class Component;
class Renderer;
class Sprite;
class Transform;

#include "types.h"

#include <string>
#include <vector>

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

    /**
     * Add a new component to the GameObject.
     *
     * Any components added are managed by the GameObject. Memory does not need to be
     * explicitly freed by the caller, as it will happen upon destruction of the GameObject.
     * As such, only *new* components should ever be added.
     *
     * @param component The component to add.
     */
    void addComponent(Component *component);

    /**
     * Remove a component from the GameObject.
     *
     * @name The name of the component to remove.
     */
    void removeComponent(std::string name);

    /**
     * Render any drawables to the canvas.
     *
     * The rendering canvas which will be drawn to.
     */
    void render(Renderer &canvas) const;

    /**
     * Update child GameObjects and components.
     */
    void update();

private:
    int id;
    std::string name;
    Transform *transform;
    Sprite *sprite;
    std::vector<Component*> components;

    std::vector<GameObject*> children;
};

#endif // _GAMEOBJECT_H_
