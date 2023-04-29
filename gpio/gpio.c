#include <stdint.h>
#include "gpio.h"
#include "gpio_regs.h"

void gpio_conf_pin_mode(uint16_t pin_no, uint8_t mode)
{
    uint32_t* gpio_ctrl_reg = (uint32_t*) (IO_Base + 4 + (pin_no*8));
    *gpio_ctrl_reg = 0;
    *gpio_ctrl_reg |= (mode);
}

void gpio_conf_pin_dir(uint16_t pin_no, uint8_t dir)
{
    *SIO_GPIO_OUT_CLR |= (1 << pin_no);
    if(dir) *SIO_GPIO_OE_SET |= (1 << pin_no);
    else *SIO_GPIO_OE_CLR |= (1 << pin_no);
}

// void gpio_conf_pin_pad_function(uint16_t pin_no, drive_strength drive_strength, pull_up_down pull_up_down, schmitt_en schmitt_en, slew_rate slew_rate)
// {
//     uint32_t reg=0x00;

//     uint32_t* pad_reg = (uint32_t*) (PADS_BANK0_BASE + 4*(pin_no+1));
//     // disable output and enable input
//     reg |= (1 << OUTPUT_DISABLE_BIT) | (1 << INPUT_ENABLE_BIT);
    
//     // set drive strength
//     reg |= (drive_strength << DRIVE_STRENGTH_BIT);

//     //set pull up or pull down
//     reg |= (pull_up_down << PULL_UP_DOWN_BIT);

//     //set schmitt trigger enable
//     reg |= (schmitt_en << ENABLE_SCHMITT_TRIGGER_BIT);

//     //set slew rate
//     reg |= (slew_rate);

//     *pad_reg = reg;
// }

void gpio_conf_pin_pullupdown(uint16_t pin_no, pull_up_down pull_up_down)
{
    uint32_t* pad_reg = (uint32_t*) (PADS_BANK0_BASE + 4*(pin_no+1));
    if(pull_up_down == PULL_UP_ENABLE){
        *pad_reg |= (pull_up_down << PULL_UP_BIT);
        *pad_reg &= ~(pull_up_down << PULL_DOWN_BIT);
    } else {
        *pad_reg &= ~(pull_up_down << PULL_UP_BIT);
        *pad_reg |= (pull_up_down << PULL_DOWN_BIT);
    }
}

void gpio_conf_pin_pad_function(uint16_t pin_no) 
{

    // uint32_t* pad_reg = (uint32_t*) (PADS_BANK0_BASE + 4*(pin_no+1));
    // disable output and enable input
    // reg |= (1 << OUTPUT_DISABLE_BIT) | (1 << INPUT_ENABLE_BIT);
    // *pad_reg = reg;
}

uint8_t gpio_read_from_pin(uint16_t pin_no){
    return ((*SIO_GPIO_IN >> pin_no) & 0x00000001);
}

void gpio_write_to_pin(uint16_t pin_no, uint8_t val){
    if(val)
        *SIO_GPIO_OUT_SET |= (1 << pin_no);
    else *SIO_GPIO_OUT_CLR |= (1 << pin_no);
}