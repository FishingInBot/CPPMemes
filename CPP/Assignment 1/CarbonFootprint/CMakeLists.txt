cmake_minimum_required(VERSION 3.23)
project(CarbonFootprint)

set(CMAKE_CXX_STANDARD 14)

add_executable(CarbonFootprint main.cpp Bicycle.cpp Bicycle.h Building.h Building.cpp Car.cpp Car.h CarbonFootprint.h CarbonFootprint.cpp)
