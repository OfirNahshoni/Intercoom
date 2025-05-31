# include/CMakeLists.txt

cmake_minimum_required(VERSION 3.20)

target_sources(audio_manager_static PRIVATE AudioManager.hpp)
target_sources(audio_manager_shared PRIVATE AudioManager.hpp)

target_sources(video_manager_static PRIVATE VideoManager.hpp)
target_sources(video_manager_shared PRIVATE VideoManager.hpp)