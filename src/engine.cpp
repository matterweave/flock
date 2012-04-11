/*
 * Copyright (c) 2011, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "engine.h"
#include "inputmanager.h"
#include "renderer.h"
#include "scriptmanager.h"
#include "logog/logog.hpp"

/* Constructors & Destructor
------------------------------------------------------------------------------*/

Engine::Engine() : is_running(true) {}

Engine::~Engine() {
//	if (scene_root != NULL) {
//		delete scene_root;
//	}
    delete engine_scriptor;
    delete renderer;
    delete input;
}

/* Public Interface
------------------------------------------------------------------------------*/

void Engine::load_config()
{
    
}

void Engine::init()
{
    INFO("Initializing Engine.");
    input = new InputManager();
    renderer = new Renderer();
    engine_scriptor = ScriptManager::new_environment("engine");
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

void Engine::update() {}

