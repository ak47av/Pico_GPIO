add_executable(Blink main.c)

pico_enable_stdio_usb(Blink 1)
pico_enable_stdio_uart(Blink 0)

target_link_libraries(Blink gpio)

# create map/bin/hex file etc.
pico_add_extra_outputs(Blink)