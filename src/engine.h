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

/**
 * Acts as the major controller of the simulation.
 *
 * The engine is called from main(), and it continues to run until the simulation or
 * something else (likely an error) tells it to stop. The engine is responsible for
 * loading the major game components as well, including the loading of levels.
 */
class Engine {
public:
    Engine();
    ~Engine();

    /**
     * Load the configuration for basic engine values.
     */
    void load_config();

    /**
     * Initialize any subsystems and start running.
     */
    void init();

    /**
     * Perform a cycle of the simulation.
     */
    void run();

    void process_input();

    /**
     * Update the state of the simulation.
     */
    void update();

private:
    bool is_running;
    GameObject *scene_root;
    InputManager *input;
    Renderer *renderer;
    dictionary *config_values;

    const static std::string DEFAULT_CONFIG_FILE;

    Engine(Engine &copy);
    Engine & operator=(Engine &rhs);
};

#endif // _ENGINE_H_
