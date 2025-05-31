# src/CMakeLists.txt
cmake_minimum_required(VERSION 3.20)


project(audio_manager)
add_library(audio_manager_static STATIC AudioManager.cpp)
add_library(audio_manager_shared SHARED AudioManager.cpp)

project(video_manager)
add_library(video_manager_static STATIC VideoManager.cpp)
add_library(video_manager_shared SHARED VideoManager.cpp)