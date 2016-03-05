cmake_minimum_required(VERSION 3.0)
project(7segment)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lwiringPi -lpthread")

set(SOURCE_FILES main.cpp Adafruit_LEDBackpack.h Adafruit_LEDBackpack.cpp)
add_executable(7segment ${SOURCE_FILES})
