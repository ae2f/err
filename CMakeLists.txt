cmake_minimum_required(VERSION 3.20)

project(err VERSION 3.7.3 LANGUAGES C CXX)
enable_testing()
add_subdirectory(mod/ae2f/Core)


set(ae2f_LIBPREFIX "Flag: Something went wrong" CACHE STRING "")

if(NOT TARGET ${PROJECT_NAME})
    ae2f_CoreLibTent(
        ${PROJECT_NAME} ${ae2f_LIBPREFIX} include ae2f
        "include/ae2f/err.h"
        "src/err.c"
    )

    target_link_libraries(${PROJECT_NAME} Core)
endif()