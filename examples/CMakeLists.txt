cmake_minimum_required(VERSION 3.13)
include(pico_sdk_import.cmake)
project(test_project C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()

add_subdirectory(Blink)
add_subdirectory(pushButton)
add_subdirectory(../gpio build)

# add_executable(test src/main.cpp src/gpio/gpio.cpp)

# pico_add_extra_outputs(test)

# target_sources(test INTERFACE
#     ${CMAKE_CURRENT_LIST_DIR}/src/main.cpp
#     ${CMAKE_CURRENT_LIST_DIR}/src/gpio/gpio.cpp
# )

# target_include_directories(test INTERFACE ${CMAKE_CURRENT_LIST_DIR}/src ${CMAKE_CURRENT_LIST_DIR}/src/gpio)


# target_link_libraries(pushButton pico_stdlib)
