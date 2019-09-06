cmake_minimum_required(VERSION 3.0)
project(CPU)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS -mfma)

add_executable(feature_db main.cpp)
target_link_libraries(feature_db pthread)
