/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#ifndef _ENGINE_H_
#define _ENGINE_H_

extern "C" {
    #include "iniparser/iniparser.h"
}

#include <string>

class InputManager;
class Renderer;
//class ScriptManager;

class Engine {
    public:
        Engine();
        ~Engine();

        void load_config();
        void init();
        void run();

        void process_input();
        void render();
        void update();

    private:
        bool is_running;
        //GameObject *scene_root;
        //AssetManager assets;
        InputManager *input;
        //ScriptManager *engine_scriptor;
        Renderer *renderer;
        dictionary *config_values;

        const static std::string DEFAULT_CONFIG_FILE;

        Engine(Engine &copy);
        Engine & operator=(Engine &rhs);
};

#endif // _ENGINE_H_
