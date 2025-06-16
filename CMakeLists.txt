cmake_minimum_required(version 3.25)

project(rubiks_solver 
    VERSION 0.1.0 
    DESCRIPTION "C++ Implementation of various Rubik's Cube solving algorithms"
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


if(MSVC)
    add_compile_options(/W4 /O2)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

add_library(rubiks_lib STATIC
    src/cube/cube.cpp
)

target_include_directories(rubiks_lib PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

add_executable(rubiks_app 
    app/main.cpp
)

target_link_libraries(rubiks_app PRIVATE
    rubiks_lib
)
    
    
