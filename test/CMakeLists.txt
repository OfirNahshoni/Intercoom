# test/CMakeLists.txt

cmake_minimum_required(VERSION 3.20)
project(TestIntercom)



project(audio_manager)
add_executable(audio_manager AudioManagerTest.cpp)
target_link_libraries(audio_manager audio_manager_static)
