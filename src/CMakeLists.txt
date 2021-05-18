project(c_tarot)

cmake_minimum_required(VERSION 3.16)

find_package(Qt5Widgets)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -Wall")

include_directories(${CMAKE_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR})

set(SOURCES
	main.cpp
)

add_executable(c_tarot ${SOURCES})

