#include "stdint.h"
#include "pico/stdlib.h"
#include "main.h"

int main(){
    uint16_t pin1 = LED_RED;
    // uint16_t pin2 = LED_BLUE;
    // uint16_t pin3 = LED_GREEN;

    gpio_conf_pin_mode(pin1,GPIO_MODE_SIO);
    // gpio_conf_pin_mode(pin2,GPIO_MODE_SIO);
    // gpio_conf_pin_mode(pin3,GPIO_MODE_SIO);
    // gpio_conf_pin_pad_function(pin);
    gpio_conf_pin_dir(pin1, OUT);
    // gpio_conf_pin_dir(pin2, OUT);
    // gpio_conf_pin_dir(pin3, OUT);
    
    while(1){
    gpio_write_to_pin(pin1, 1);
    sleep_ms(500);
        // gpio_write_to_pin(pin2, 0);
        // gpio_write_to_pin(pin3, 0);

    // gpio_write_to_pin(pin2, 1);
    //    gpio_write_to_pin(pin3, 0);
    //     gpio_write_to_pin(pin1, 0);
    // sleep_ms(500);

    // gpio_write_to_pin(pin3, 1);
    //     gpio_write_to_pin(pin2, 0);
    //     gpio_write_to_pin(pin1, 0);

    gpio_write_to_pin(pin1, 0);
    sleep_ms(500);
    }
    return 0;

}