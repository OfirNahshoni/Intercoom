# test/CMakeLists.txt

cmake_minimum_required(VERSION 3.20)

set(LIBS_STATIC_LIST video_manager_static audio_manager_static
        media_manager_static)

add_executable(test_admin IntercoomTest.cpp)
target_link_libraries(test_admin PRIVATE ${LIBS_STATIC_LIST})
