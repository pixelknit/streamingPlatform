cmake_minimum_required(VERSION 3.14.8)
project(platform)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

add_executable(${PROJECT_NAME} main.cpp)
add_subdirectory(source)
target_include_directories(${PROJECT_NAME} PUBLIC source)
target_link_libraries(${PROJECT_NAME} platformlib)

#set_property(TARGET tgt PROPERTY CXX_STANDARD 17)
#target_compile_options(${PROJECT_NAME} PRIVATE --DCMAKE_CXX_STANDARD=17)
#target_compile_features(${TARGET_NAME} PRIVATE cxx_std_17)

