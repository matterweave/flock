/*
 * Copyright (c) 2011, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#ifndef _SCRIPTMANAGER_H_
#define _SCRIPTMANAGER_H_

/**
 * Manages all script execution and the corresponding environment
 * for the duration of the simulation.
 */
class ScriptManager
{
    public:
        ScriptManager();
        ~ScriptManager();

        static ScriptManager * new_environment(const char *name);

        bool run_script(char *name);

    private:
};

#endif // _SCRIPTMANAGER_H_

