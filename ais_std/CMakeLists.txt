cmake_minimum_required(VERSION 3.5)
project(ais_std)



message(STATUS "CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
message(STATUS "CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")


add_executable(ais_std main.c add/add.c)

target_include_directories(ais_std PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/add)

add_subdirectory(sum)
target_link_libraries(ais_std sumtool)


