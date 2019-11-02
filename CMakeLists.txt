cmake_minimum_required(VERSION 3.15)
project(inheritanceConcept)

set(CMAKE_CXX_STANDARD 17)

add_executable(inheritanceConcept main.cpp AbstractClass.h AbstractClass.cpp ManagerClass.h ManagerClass.cpp PointerClass.h PointerClass.cpp ManagedClass.cpp ManagedClass.h)