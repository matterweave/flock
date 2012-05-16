-- Flock Engine Solution

PROJ_NAME = "Flock"

-- Premake OS Constants
WINDOWS = "windows"
LINUX = "linux"
OSX = "macosx"

-- Standard project build settings
DEBUG_DEFINES = { "DEBUG" }
DEBUG_FLAGS = { "Symbols" }
RELEASE_DEFINES = { "NDEBUG" }
RELEASE_FLAGS = { "Optimize" }

-- Constants for included libraries
DEBUG_LIB_DIRS = {}
RELEASE_LIB_DIRS = {}
WINDOWS_X86_DEBUG = "lib/debug/nt/x86"
WINDOWS_X86_RELEASE = "lib/release/nt/x86"
UNIX_RELEASE = "lib/release/unix"

-- Set up included libs
if os.is(WINDOWS) then
    table.insert(DEBUG_LIB_DIRS, WINDOWS_X86_DEBUG)
    table.insert(RELEASE_LIB_DIRS, WINDOWS_X86_RELEASE)
elseif os.is(OSX) then
elseif os.is(LINUX) then
    table.insert(DEBUG_LIB_DIRS, UNIX_RELEASE)
    table.insert(RELEASE_LIB_DIRS, UNIX_RELEASE)
end

-- Define the project
solution(PROJ_NAME)
    configurations { "Debug", "Release" }
    buildoptions { "-std=c++11" }

    project(PROJ_NAME)
        kind("ConsoleApp")
        language("C++")
        files { "src/**.h", "src/**.cpp" }
        excludes { "src/scriptmanager.*" }
        links { "logog", "iniparser", "SDL", "SDL_image" }
        includedirs { "include" }

        configuration "Debug"
            libdirs { DEBUG_LIB_DIRS }
            defines { DEBUG_DEFINES }
            flags { DEBUG_FLAGS }

        configuration "Release"
            libdirs { RELEASE_LIB_DIRS }
            defines { RELEASE_DEFINES }
            flags { RELEASE_FLAGS }
