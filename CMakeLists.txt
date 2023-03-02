# Based on https://gitlab.com/CLIUtils/modern-cmake/tree/master/examples/extended-project

cmake_minimum_required(VERSION 3.16...3.26)

project(SkeletonCpp
        VERSION 0.1
        DESCRIPTION "Skeleton C++ Project"
        LANGUAGES CXX
        )

set(CMAKE_CXX_STANDARD 20)

# Only do these if this is the main project, and not if it is included through add_subdirectory
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    set(CMAKE_CXX_EXTENSIONS OFF)
    set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

    set_property(GLOBAL PROPERTY USE_FOLDERS ON)

    include(GNUInstallDirs)

    find_package(Doxygen)
    if(Doxygen_FOUND)
        add_subdirectory(docs)
    else()
        message(STATUS "Doxygen not found, not building docs")
    endif()
endif()

# Find dependencies
include(cmake/dependencies.cmake)

# The compiled library code is here
add_subdirectory(src)

# The executable code is here
add_subdirectory(app)

# Testing only available if this is the main app
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    include(cmake/gtest.cmake)
    add_subdirectory(tests)
endif()