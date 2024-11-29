cmake_minimum_required(VERSION 3.5)
project(sumtool)

add_library(sumtool STATIC sum.c)

target_include_directories(sumtool PUBLIC ${CMAKE_SOURCE_DIR}/include/ais_std/sum)

set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/deploy)
install(TARGETS sumtool DESTINATION lib/ais_std/sum)
install(FILES ${CMAKE_SOURCE_DIR}/include/ais_std/sum/sum.h DESTINATION include/ais_std/sum)

