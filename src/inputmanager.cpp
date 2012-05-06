/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "inputmanager.h"
#ifdef WINDOWS
#include "SDL.h"
#else
#include "SDL/SDL.h"
#endif

/* Constructors & Destructor
------------------------------------------------------------------------------*/

InputManager::InputManager() {}

InputManager::~InputManager() {}

/* Public Interface
------------------------------------------------------------------------------*/

void InputManager::update_input_state()
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
            case SDL_QUIT:
                keyStates[WINDOW_QUIT] = true;
        }
    }
}

bool InputManager::get_input(int key)
{
    return keyStates[key];
}
