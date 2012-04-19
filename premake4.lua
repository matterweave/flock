-- Gorgon Engine Solution

PROJ_NAME = "Gorgon"

-- Premake OS Constants
WINDOWS = "windows"
LINUX = "linux"
OSX = "macosx"

DEBUG_DEFINES = { "DEBUG" }
DEBUG_FLAGS = { "Symbols" }
RELEASE_DEFINES = { "NDEBUG" }
RELEASE_FLAGS = { "Optimize" }

DEBUG_LIB_DIRS = {}
RELEASE_LIB_DIRS = {}
WINDOWS_X86_DEBUG = "lib/debug/nt/x86"
WINDOWS_X86_RELEASE = "lib/release/nt/x86"

if os.is(WINDOWS) then
    table.insert(DEBUG_LIB_DIRS, WINDOWS_X86_DEBUG)
    table.insert(RELEASE_LIB_DIRS, WINDOWS_X86_RELEASE)
elseif os.is(OSX) then
elseif os.is(LINUX) then
end

solution(PROJ_NAME)
    configurations { "Debug", "Release" }

    project(PROJ_NAME)
        kind("ConsoleApp")
        language("C++")
        files { "src/**.h", "src/**.cpp" }
        links { "logog", "SDL" }
        includedirs { "include" }

        configuration "Debug"
            libdirs { DEBUG_LIB_DIRS }
            defines { DEBUG_DEFINES }
            flags { DEBUG_FLAGS }

        configuration "Release"
            libdirs { RELEASE_LIB_DIRS }
            defines { RELEASE_DEFINES }
            flags { RELEASE_FLAGS }
