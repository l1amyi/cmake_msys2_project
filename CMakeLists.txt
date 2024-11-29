cmake_minimum_required(VERSION 3.5)

# include_dirctories 影响以下所有项目
# target_include_dirctories 只影响指定项目
include_directories(${CMAKE_SOURCE_DIR}/include/ais_std)

project(ais)
add_subdirectory(ais_std)

enable_testing()
add_subdirectory(test/add)


set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/deploy)
install(TARGETS ais_std DESTINATION bin)
