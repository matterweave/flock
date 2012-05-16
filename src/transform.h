/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#ifndef _TRANSFORM_H_
#define _TRANSFORM_H_

#include "types.h"
#include "component.h"

class GameObject;

class Transform : public Component {
public:
    Transform(GameObject &parent);
    Transform(GameObject &parent, coord x, coord y);
    Transform(GameObject &parent, coord x, coord y, int z);

    void update();

    coord   getX() const;
    coord   getY() const;
    int     getZ() const;
    void    setX(coord x);
    void    setY(coord y);
    void    setZ(int z);

private:
    coord x;
    coord y;
    int z;
};

#endif // _TRANSFORM_H_
