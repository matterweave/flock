/*
 * Copyright (c) 2011, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "scriptmanager.h"
#include "logog/logog.hpp"

/* Constructors & Destructor
------------------------------------------------------------------------------*/

ScriptManager::ScriptManager()
{
}

ScriptManager::~ScriptManager()
{
}

/* Public Interface
------------------------------------------------------------------------------*/

ScriptManager * ScriptManager::new_environment(const char *name)
{
    INFO("Creating new scripting environment: %s", name);

    return new ScriptManager();
}

bool ScriptManager::run_script(char *name)
{
    INFO("Running script %s", name);
}

