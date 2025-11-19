cmake_minimum_required(VERSION 3.28)
project(LecPatterns)

set(CMAKE_CXX_STANDARD 20)

add_executable(LecPatterns main.cpp
        Creational/FactoryMethod/Factory.cpp
        Creational/FactoryMethod/Factory.h
        Creational/AbstractFactory/AbstractFactory.cpp
        Creational/AbstractFactory/AbstractFactory.h
        Creational/Builder/Builder.cpp
        Creational/Builder/Builder.h
        Creational/Prototype/Prototype.cpp
        Creational/Prototype/Prototype.h
        Creational/Singleton/Singleton.cpp
        Creational/Singleton/Singleton.h
        Structural/Adapter/Adapter.cpp
        Structural/Adapter/Adapter.h
        Structural/Bridge/Bridge.cpp
        Structural/Bridge/Bridge.h
        Structural/Composite/Composite.cpp
        Structural/Composite/Composite.h
        Structural/Decorator/Decorator.cpp
        Structural/Decorator/Decorator.h
        Structural/Facade/Facade.cpp
        Structural/Facade/Facade.h)

include_directories(Creational/FactoryMethod
                    Creational/AbstractFactory
                    Creational/Builder
                    Creational/Prototype
                    Creational/Singleton
        Structural/Adapter
        Structural/Bridge
        Structural/Composite
        Structural/Decorator
        Structural/Facade)
