/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#ifndef _COMPONENT_H_
#define _COMPONENT_H_

class GameObject;

/**
 * The base class for any extension of objects in the game.
 *
 * Some components have very specialized functionality, whereas scripts are fairly
 * general in what they can do. At the very least, each component has something that it
 * does during a simulation update and a name for identification purposes. The name
 * should be set by the implementing class.
 */
class Component {
public:
    /**
     * Construct a component with a name and parent.
     *
     * @param name The human-readable name of the component. Should be consistent for all
     * components of this type (i.e. it should be "transform" for every Transform component).
     * @param parent The GameObject this component is attached to.
     */
    explicit Component(const char *name, GameObject &parent);

    virtual ~Component();

    /**
     * Update the state of the Component in the simulation.
     *
     * Each Component implementation will handle this differently.
     */
    virtual void update() = 0;

    const char * getName() const;
    GameObject & getParent() const;

private:
    const char *name;
    GameObject &parent;

    Component(const Component &copy);
    Component & operator=(const Component &rhs);
};

#endif // _COMPONENT_H_
