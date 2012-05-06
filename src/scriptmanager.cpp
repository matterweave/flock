/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "scriptmanager.h"
#include "logog/logog.hpp"
#include "lua.hpp"

/* Constructors & Destructor
------------------------------------------------------------------------------*/

ScriptManager::ScriptManager(const std::string name)
{
	_name = name;
	_environment = luaL_newstate();
}

ScriptManager::~ScriptManager()
{
	lua_close(_environment);
}

/* Public Interface
------------------------------------------------------------------------------*/

ScriptManager * ScriptManager::new_environment(const std::string name)
{
    INFO("Creating new scripting environment: %s", name.c_str());

    return new ScriptManager(name);
}

bool ScriptManager::run_script(const std::string name)
{
    INFO("Running script %s", name.c_str());

	return true;
}
