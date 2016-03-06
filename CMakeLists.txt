cmake_minimum_required(VERSION 3.0)
project(7segment)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lwiringPi -lpthread")

set(SOURCE_FILES Adafruit_LEDBackpack.h Adafruit_LEDBackpack.cpp)
set(DEMO_FILES main.cpp)

add_library(7segment STATIC ${SOURCE_FILES})

add_executable(7segment_demo ${DEMO_FILES})
target_link_libraries(7segment_demo 7segment)