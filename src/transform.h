/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#ifndef _TRANSFORM_H_
#define _TRANSFORM_H_

#include "types.h"

class Transform {
public:
    Transform();
    Transform(coord x, coord y);
    Transform(coord x, coord y, int z);

    coord   getX();
    coord   getY();
    int     getZ();
    void    setX(coord x);
    void    setY(coord y);
    void    setZ(int z);

private:
    coord x;
    coord y;
    int z;
};

#endif // _TRANSFORM_H_
