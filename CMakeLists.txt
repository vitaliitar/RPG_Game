# CMake entry point
cmake_minimum_required (VERSION 3.0)
project (RPG_Game)

if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")
else()
    set(CMAKE_CXX_STANDARD 17)
endif(MSVC)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

add_definitions(
	-D_CRT_SECURE_NO_WARNINGS
)

# Source code
file(GLOB Sources
	Source/*.hpp
	Source/*.cxx)

add_executable(${PROJECT_NAME} ${Sources} Source/Game.cxx)
# target_link_libraries(${PROJECT_NAME} ${ALL_LIBS})

# Xcode and Visual working directories
set_target_properties(${PROJECT_NAME} PROPERTIES XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Source/")

if(MSVC)
   set_target_properties( ${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../Build/Windows" )
else()
   set_target_properties( ${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../Build/MacOS" )
endif(MSVC)