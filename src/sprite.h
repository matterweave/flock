/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#ifndef _SPRITE_H_
#define _SPRITE_H_

class Renderer;

#include "component.h"
#include "mesh2d.h"

/**
 * The sprite component provides a static image to render during a loop cycle.
 *
 * Animations are not handled here. The sprite component is meant purely for static
 * objects. It can be used for objects that do have animations (from the Animation
 * component), in which case, the sprite will render when no animations are currently
 * playing.
 */
class Sprite : public Component {
public:
    explicit Sprite(const GameObject &parent);
    ~Sprite();

    /**
     * Called during the rendering phase to draw this sprite.
     *
     * @param canvas The rendering canvas to draw to.
     */
    void render(Renderer &canvas);

    /**
     * See Component::update().
     */
    void update();

private:
    Mesh2D mesh;

    Sprite(const Sprite &copy);
    Sprite & operator=(const Sprite &rhs);
};

#endif // _SPRITE_H_
