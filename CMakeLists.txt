cmake_minimum_required(VERSION 3.2)
project(HomeWorkMult-4)


set(SOURCES HomeWorkMult-4.cpp circle.cpp cube.cpp cylinder.cpp line.cpp shape.cpp square.cpp transform.cpp)
set(HEADERS circle.h cube.h cylinder.h line.h shape.h square.h parameters.h point.h transform.h)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})


