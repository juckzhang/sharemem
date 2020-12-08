project(nginx)
cmake_minimum_required(VERSION 3.10.2)

aux_source_directory(. SRC_LIST)
aux_source_directory(./src SRC_LIST)

#add_executable(${PROJECT_NAME} ${SRC_LIST})

INCLUDE_DIRECTORIES(./)
INCLUDE_DIRECTORIES(./src)

ADD_LIBRARY(shmx SHARED ${SRC_LIST})
set(LIBRARY_OUTPUT_PATH ../libs/)