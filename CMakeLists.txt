cmake_minimum_required(VERSION 3.14)
project(Random VERSION 1.0 DESCRIPTION "")

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

add_library(${PROJECT_NAME} SHARED)

target_include_directories(${PROJECT_NAME} PUBLIC include)
target_sources(${PROJECT_NAME}
		PUBLIC
		include/Random/Random.h
		PRIVATE
		src/Random.cpp)
