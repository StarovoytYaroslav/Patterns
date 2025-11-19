cmake_minimum_required(VERSION 3.28)
project(LecPatterns)

set(CMAKE_CXX_STANDARD 20)

add_executable(LecPatterns main.cpp
        Creational/FactoryMethod/Factory.cpp
        Creational/FactoryMethod/Factory.h)
