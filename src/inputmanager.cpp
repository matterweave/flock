/*
 * Copyright (c) 2011, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "inputmanager.h"
#include "SDL/SDL.h"

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
        //keyStates[InputManager::ConvertKey(event.type)] = InputManager::ConvertKeyState(event);
    }
}

bool InputManager::get_input(int key)
{
    return keyStates[key];
}

/* Private Interface
------------------------------------------------------------------------------*/

int InputManager::ConvertKey(int key)
{
    switch (key)
    {
        case SDL_QUIT:
            return WINDOW_QUIT;

        default:
            return -1;
    }
}

bool InputManager::ConvertKeyState(int key)
{
}
