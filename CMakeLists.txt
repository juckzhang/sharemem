project(sharemem)
cmake_minimum_required(VERSION 3.10.2)

aux_source_directory(. SRC_LIST)
aux_source_directory(./src SRC_LIST)
SET(CMAKE_BUILD_TYPE Debug)
# 显示编译过程
set(CMAKE_VERBOSE_MAKEFILE ON)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

add_executable(${PROJECT_NAME} ${SRC_LIST})

INCLUDE_DIRECTORIES(./)
INCLUDE_DIRECTORIES(./src)
add_definitions("-Wall -ggdb3 -O0")
#ADD_LIBRARY(sharemem SHARED ${SRC_LIST})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} pthread)
