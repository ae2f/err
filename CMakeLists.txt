cmake_minimum_required(VERSION 3.20)
project(err VERSION 3.10.7 LANGUAGES C CXX)
enable_testing()
include(cmake/Core.cmake)

if(NOT TARGET ${PROJECT_NAME})
    ae2f_CoreLibFetch(ae2f Core Rel-v6.15.11)

    ae2f_CoreLibTent(
        ${PROJECT_NAME} ${ae2f_LIBPREFIX} include ae2f
        "include/ae2f/err.h"
        "src/err.c"
    )

    target_link_libraries(${PROJECT_NAME} Core)
endif()