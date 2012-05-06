/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "engine.h"
#include "inputmanager.h"
#include "renderer.h"
//#include "scriptmanager.h"
#include "logog/logog.hpp"

#include <fstream>

/* Static Members
------------------------------------------------------------------------------*/

const std::string Engine::DEFAULT_CONFIG_FILE = "tempest.ini";

/* Constructors & Destructor
------------------------------------------------------------------------------*/

Engine::Engine() : is_running(true) {}

Engine::~Engine() {
//	if (scene_root != NULL) {
//		delete scene_root;
//	}
    //delete engine_scriptor;
    delete renderer;
    delete input;
}

/* Public Interface
------------------------------------------------------------------------------*/

void Engine::load_config()
{
    // Open default config file
    {
        using namespace std;

        fstream config_file;
        config_file.open(DEFAULT_CONFIG_FILE.c_str(), fstream::in);

        // Read configuration from file into configuration structure

        // Close config file
        config_file.close();
    }

    // Verify values and provide defaults if necessary
}

void Engine::init()
{
    INFO("Initializing Engine.");
    input = new InputManager();
    renderer = new Renderer();
    //engine_scriptor = ScriptManager::new_environment("engine");

	run();
}

void Engine::run()
{
    while (is_running)
    {
        process_input();
        update();
        render();
    }
}

void Engine::process_input()
{
    input->update_input_state();
}

void Engine::render() {}

void Engine::update()
{
    if (input->get_input(WINDOW_QUIT))
        is_running = false;
}
