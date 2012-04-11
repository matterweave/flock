-- Gorgon Engine Solution

PROJ_NAME = "Gorgon"

DEBUG_DEFINES = { "DEBUG" }
DEBUG_FLAGS = { "Symbols" }
RELEASE_DEFINES = { "NDEBUG" }
RELEASE_FLAGS = { "Optimize" }

solution(PROJ_NAME)
	configurations { "Debug", "Release" }

	project(PROJ_NAME)
		kind("ConsoleApp")
		language("C++")
		files { "**.h", "**.cpp" }
        links { "logog", "ybrec", "SDL" }

		configuration "Debug"
			defines { DEBUG_DEFINES }
			flags { DEBUG_FLAGS }

		configuration "Release"
			defines { RELEASE_DEFINES }
			flags { RELEASE_FLAGS }
