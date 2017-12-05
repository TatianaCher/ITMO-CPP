cmake_minimum_required(VERSION 2.8)

project(Critter)

set(SOURCE_LIB critter.cpp)

add_library(critter STATIC ${SOURCE_LIB})


add_executable(${PROJECT_NAME} "main.cpp")
