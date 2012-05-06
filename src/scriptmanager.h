/*
 * Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#ifndef _SCRIPTMANAGER_H_
#define _SCRIPTMANAGER_H_

#include <string>
#include <map>

struct lua_State;

/**
 * Manages all script execution and the corresponding environment
 * for the duration of the simulation.
 */
class ScriptManager
{
    public:
        ScriptManager(const std::string name);
        ~ScriptManager();

        static ScriptManager * new_environment(const std::string name);

        bool run_script(const std::string name);

    private:
		std::string _name;
		lua_State *_environment;
};

#endif // _SCRIPTMANAGER_H_
