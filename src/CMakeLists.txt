# src/CMakeLists.txt
cmake_minimum_required(VERSION 3.20)


project(audio_manager)
add_library(audio_manager_static STATIC AudioManager.cpp)
add_library(audio_manager_shared SHARED AudioManager.cpp)

