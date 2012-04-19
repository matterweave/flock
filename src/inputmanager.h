/*
 * Copyright (c) 2011, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#ifndef _INPUTMANAGER_H_
#define _INPUTMANAGER_H_

#include <map>

/**
 * Manages and tracks changes in the input state of
 * all peripheral devices, such as mice, keyboards,
 * and joysticks.
 */
class InputManager
{
    public:
        InputManager();
        ~InputManager();

        void update_input_state();
        bool get_input(int key);

    private:
        std::map<int,bool> keyStates;

        static int ConvertKey(int key);
        static bool ConvertKeyState(int key);
};

enum InputKey
{
    WINDOW_QUIT = 1
};

#endif // _INPUTMANAGER_H_

