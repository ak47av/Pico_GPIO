#include "push.h"
#include "stdint.h"
#include "pico/stdlib.h"
#include "stdio.h"

// uint8_t readButton(uint16_t pin){
//     int value = gpio_read_from_pin(pin);
//     sleep_ms(100);
// }

int main(){  
    uint16_t buttonPin = 27;
    uint16_t ledPin = LED_RED;
    gpio_conf_pin_mode(buttonPin, GPIO_MODE_SIO);
    gpio_conf_pin_dir(buttonPin, 0);
    gpio_conf_pin_pullupdown(buttonPin,PULL_UP_ENABLE);
    gpio_conf_pin_mode(ledPin, GPIO_MODE_SIO);
    gpio_conf_pin_dir(ledPin, OUT);
    gpio_write_to_pin(ledPin, 0);
    uint32_t* gpio_in = (uint32_t*) 0xd0000004;
    while(1){
        if(!gpio_read_from_pin(buttonPin))
        {
            // gpio_write_to_pin(ledPin, 1);
            // sleep_ms(500);
            // gpio_write_to_pin(ledPin, 0);
            // sleep_ms(500);
            // printf("GPIO_IN: %x", gpio_in);
        }      
        sleep_ms(10);  
        // else {
        //     gpio_write_to_pin(ledPin, 0);
        // }      
        // gpio_write_to_pin(ledPin, 1);
    }
}
