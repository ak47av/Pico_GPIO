add_library(gpio INTERFACE)

target_sources(gpio INTERFACE
  ${CMAKE_CURRENT_LIST_DIR}/gpio.c
)


target_include_directories(gpio INTERFACE ${CMAKE_CURRENT_LIST_DIR}/include)

# Pull in pico libraries that we need
target_link_libraries(gpio INTERFACE pico_stdlib)