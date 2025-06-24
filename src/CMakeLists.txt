# src/CMakeLists.txt
cmake_minimum_required(VERSION 3.20)

add_library(audio_manager_static STATIC AudioManager.cpp)
add_library(audio_manager_shared SHARED AudioManager.cpp)

add_library(video_manager_static STATIC VideoManager.cpp)
add_library(video_manager_shared SHARED VideoManager.cpp)

add_library(media_manager_static STATIC MediaManager.cpp)
add_library(media_manager_shared SHARED MediaManager.cpp)


target_include_directories(audio_manager_static PRIVATE
        ${CMAKE_SOURCE_DIR}/include)
target_include_directories(audio_manager_shared PRIVATE
        ${CMAKE_SOURCE_DIR}/include)
target_include_directories(video_manager_static PRIVATE
        ${CMAKE_SOURCE_DIR}/include)
target_include_directories(video_manager_shared PRIVATE
        ${CMAKE_SOURCE_DIR}/include)
target_include_directories(media_manager_static PRIVATE
        ${CMAKE_SOURCE_DIR}/include)
target_include_directories(media_manager_shared PRIVATE
        ${CMAKE_SOURCE_DIR}/include)
