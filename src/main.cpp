/*
 * Copyright (c) 2011, Dylan Sarber <dwsarber@gmail.com>
 *
 * See LICENSE for licensing information.
 */

#include "engine.h"
#include "logog/logog.hpp"

int main(int argc, char **argv) {
    LOGOG_INITIALIZE();

    // Scope the log file
    {
        logog::Cout logOut;

        INFO("===================== Gorgon ========================");
        INFO("Copyright (c) 2012, Dylan Sarber <dwsarber@gmail.com>");
        INFO("=====================================================");

	    Engine game;

	    game.load_config();

	    game.init();
    }

    LOGOG_SHUTDOWN();

	return 0;
}

