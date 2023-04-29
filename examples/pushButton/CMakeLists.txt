add_executable(pushButton push.c)

pico_enable_stdio_usb(pushButton 1)
pico_enable_stdio_uart(pushButton 0)

target_link_libraries(pushButton gpio)

# create map/bin/hex file etc.
pico_add_extra_outputs(pushButton)