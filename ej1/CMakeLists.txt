
project(ej1)
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)

file(GLOB SOURCES "weapons/magicWeapons/*.cpp","weapons/combatWeapons/*.cpp" , "character/warrior/*.cpp", "character/wizard/*.cpp" )
file(MAKE_DIRECTORY "build/")
file(MAKE_DIRECTORY "build/bin/")

add_executable(projectExe ${SOUCES})

target_include_directories(myProctExe ${CMAKE_SOURCE_DIR}/include)

set_target_properties(projectExe PROPERTIES
RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
