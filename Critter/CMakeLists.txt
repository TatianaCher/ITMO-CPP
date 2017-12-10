cmake_minimum_required(VERSION 2.8)

project(Critter)

set(SOURCE_LIB main.cpp critter.cpp dragon.cpp predator.cpp)

#add_library(critter STATIC ${SOURCE_LIB})


add_executable(${PROJECT_NAME} ${SOURCE_LIB})
