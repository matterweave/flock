/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "engine.h"
#include "gameobject.h"
#include "inputmanager.h"
#include "renderer.h"
//#include "scriptmanager.h"
#include "sprite.h"
#include "logog/logog.hpp"

#include <fstream>

/* Static Members
------------------------------------------------------------------------------*/

const std::string Engine::DEFAULT_CONFIG_FILE = "flock.ini";

/* Constructors & Destructor
------------------------------------------------------------------------------*/

Engine::Engine() : is_running(true) {}

Engine::~Engine() {
	if (scene_root != NULL)
		delete scene_root;

    delete renderer;
    delete input;
    iniparser_freedict(config_values);
}

/* Public Interface
------------------------------------------------------------------------------*/

void Engine::load_config() {
    // Parse the config file
    config_values = iniparser_load(DEFAULT_CONFIG_FILE.c_str());
}

void Engine::init() {
    INFO("Initializing Engine.");
    input = new InputManager();
    renderer = new Renderer();

    scene_root = new GameObject(0, 0, 0);

	run();
}

void Engine::run() {
    while (is_running)
    {
        process_input();
        update();

        if (scene_root != NULL)
            scene_root->render(*renderer);

        renderer->display();
    }
}

void Engine::process_input() {
    input->update_input_state();
}

void Engine::update() {
    if (input->get_input(WINDOW_QUIT))
        is_running = false;

    scene_root->update();
}
