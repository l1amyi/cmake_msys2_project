add_executable(add_test main.c ${CMAKE_SOURCE_DIR}/ais_std/add/add.c)
add_test(test_add add_test)

target_include_directories(add_test PUBLIC ${CMAKE_SOURCE_DIR}/ais_std/add)
