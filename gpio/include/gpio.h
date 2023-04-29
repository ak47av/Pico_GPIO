#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>

#define NUM_OF_GPIO 30

// *********************************** IO Bank 0 **********************************
#define IO_Base 0x40014000

enum gpio_mode {
    GPIO_MODE_XIP = 0,
    GPIO_MODE_SPI = 1,
    GPIO_MODE_UART = 2,
    GPIO_MODE_I2C = 3,
    GPIO_MODE_PWM = 4,
    GPIO_MODE_SIO = 5,
    GPIO_MODE_PIO0 = 6,
    GPIO_MODE_PIO1 = 7,
    GPIO_MODE_GPCK = 8,
    GPIO_MODE_USB = 9,
    GPIO_MODE_NULL = 0x1f,
};

// GPIO status and control registers
// #define GPIO_0_status  ((volatile unsigned int *)(IO_Base + 0x00))
// #define GPIO_0_ctrl    ((volatile unsigned int *)(IO_Base + 0x04))
// #define GPIO_1_status  ((volatile unsigned int *)(IO_Base + 0x08))
// #define GPIO_1_ctrl    ((volatile unsigned int *)(IO_Base + 0x0c))
// #define GPIO_2_status  ((volatile unsigned int *)(IO_Base + 0x10))
// #define GPIO_2_ctrl    ((volatile unsigned int *)(IO_Base + 0x14))
// #define GPIO_3_status  ((volatile unsigned int *)(IO_Base + 0x18))
// #define GPIO_3_ctrl    ((volatile unsigned int *)(IO_Base + 0x1c))
// #define GPIO_4_status  ((volatile unsigned int *)(IO_Base + 0x20))
// #define GPIO_4_ctrl    ((volatile unsigned int *)(IO_Base + 0x24))
// #define GPIO_5_status  ((volatile unsigned int *)(IO_Base + 0x28))
// #define GPIO_5_ctrl    ((volatile unsigned int *)(IO_Base + 0x2c))
// #define GPIO_6_status  ((volatile unsigned int *)(IO_Base + 0x30))
// #define GPIO_6_ctrl    ((volatile unsigned int *)(IO_Base + 0x34))
// #define GPIO_7_status  ((volatile unsigned int *)(IO_Base + 0x38))
// #define GPIO_7_ctrl    ((volatile unsigned int *)(IO_Base + 0x3c))
// #define GPIO_8_status  ((volatile unsigned int *)(IO_Base + 0x40))
// #define GPIO_8_ctrl    ((volatile unsigned int *)(IO_Base + 0x44))
// #define GPIO_9_status  ((volatile unsigned int *)(IO_Base + 0x48))
// #define GPIO_9_ctrl    ((volatile unsigned int *)(IO_Base + 0x4c))
// #define GPIO_10_status ((volatile unsigned int *)(IO_Base + 0x50))
// #define GPIO_10_ctrl   ((volatile unsigned int *)(IO_Base + 0x54))
// #define GPIO_11_status ((volatile unsigned int *)(IO_Base + 0x58))
// #define GPIO_11_ctrl   ((volatile unsigned int *)(IO_Base + 0x5c))
// #define GPIO_12_status ((volatile unsigned int *)(IO_Base + 0x60))
// #define GPIO_12_ctrl   ((volatile unsigned int *)(IO_Base + 0x64))
// #define GPIO_13_status ((volatile unsigned int *)(IO_Base + 0x68))
// #define GPIO_13_ctrl   ((volatile unsigned int *)(IO_Base + 0x6c))
// #define GPIO_14_status ((volatile unsigned int *)(IO_Base + 0x70))
// #define GPIO_14_ctrl   ((volatile unsigned int *)(IO_Base + 0x74))
// #define GPIO_15_status ((volatile unsigned int *)(IO_Base + 0x78))
// #define GPIO_15_ctrl   ((volatile unsigned int *)(IO_Base + 0x7c))
// #define GPIO_16_status ((volatile unsigned int *)(IO_Base + 0x80))
// #define GPIO_16_ctrl   ((volatile unsigned int *)(IO_Base + 0x84))
// #define GPIO_17_status ((volatile unsigned int *)(IO_Base + 0x88))
// #define GPIO_17_ctrl   ((volatile unsigned int *)(IO_Base + 0x8c))
// #define GPIO_18_status ((volatile unsigned int *)(IO_Base + 0x90))
// #define GPIO_18_ctrl   ((volatile unsigned int *)(IO_Base + 0x94))
// #define GPIO_19_status ((volatile unsigned int *)(IO_Base + 0x98))
// #define GPIO_19_ctrl   ((volatile unsigned int *)(IO_Base + 0x9c))
// #define GPIO_20_status ((volatile unsigned int *)(IO_Base + 0xa0))
// #define GPIO_20_ctrl   ((volatile unsigned int *)(IO_Base + 0xa4))
// #define GPIO_21_status ((volatile unsigned int *)(IO_Base + 0xa8))
// #define GPIO_21_ctrl   ((volatile unsigned int *)(IO_Base + 0xac))
// #define GPIO_22_status ((volatile unsigned int *)(IO_Base + 0xb0))
// #define GPIO_22_ctrl   ((volatile unsigned int *)(IO_Base + 0xb4))
// #define GPIO_23_status ((volatile unsigned int *)(IO_Base + 0xb8))
// #define GPIO_23_ctrl   ((volatile unsigned int *)(IO_Base + 0xbc))
// #define GPIO_24_status ((volatile unsigned int *)(IO_Base + 0xc0))
// #define GPIO_24_ctrl   ((volatile unsigned int *)(IO_Base + 0xc4))
// #define GPIO_25_status ((volatile unsigned int *)(IO_Base + 0xc8))
// #define GPIO_25_ctrl   ((volatile unsigned int *)(IO_Base + 0xcc))
// #define GPIO_26_status ((volatile unsigned int *)(IO_Base + 0xd0))
// #define GPIO_26_ctrl   ((volatile unsigned int *)(IO_Base + 0xd4))
// #define GPIO_27_status ((volatile unsigned int *)(IO_Base + 0xd8))
// #define GPIO_27_ctrl   ((volatile unsigned int *)(IO_Base + 0xdc))
// #define GPIO_28_status ((volatile unsigned int *)(IO_Base + 0xe0))
// #define GPIO_28_c


// #define GPIO_29_status ((volatile unsigned int *)(IO_Base + 0xe8))
// #define GPIO_29_ctrl   ((volatile unsigned int *)(IO_Base + 0xec))

// raw interrupts
#define INTR0 ((volatile unsigned int *)(IO_Base + 0xf0))
#define INTR1 ((volatile unsigned int *)(IO_Base + 0xf4))
#define INTR2 ((volatile unsigned int *)(IO_Base + 0xf8))
#define INTR3 ((volatile unsigned int *)(IO_Base + 0xfc))

// interrupt enable for proc0
#define PROC0_INTE0 ((volatile unsigned int *)(IO_Base + 0x100))
#define PROC0_INTE1 ((volatile unsigned int *)(IO_Base + 0x104))
#define PROC0_INTE2 ((volatile unsigned int *)(IO_Base + 0x108))
#define PROC0_INTE3 ((volatile unsigned int *)(IO_Base + 0x10c))

// interrupt force for proc0
#define PROC0_INTF0 ((volatile unsigned int *)(IO_Base + 0x110))
#define PROC0_INTF1 ((volatile unsigned int *)(IO_Base + 0x114))
#define PROC0_INTF2 ((volatile unsigned int *)(IO_Base + 0x118))
#define PROC0_INTF3 ((volatile unsigned int *)(IO_Base + 0x11c))

// interrupt stats after masking and forcing for proc0
#define PROC0_INTS0 ((volatile unsigned int *)(IO_Base + 0x120))
#define PROC0_INTS1 ((volatile unsigned int *)(IO_Base + 0x124))
#define PROC0_INTS2 ((volatile unsigned int *)(IO_Base + 0x128))
#define PROC0_INTS3 ((volatile unsigned int *)(IO_Base + 0x12c))

// interrupt enable for proc1
#define PROC1_INTE0 ((volatile unsigned int *)(IO_Base + 0x130))
#define PROC1_INTE1 ((volatile unsigned int *)(IO_Base + 0x134))
#define PROC1_INTE2 ((volatile unsigned int *)(IO_Base + 0x138))
#define PROC1_INTE3 ((volatile unsigned int *)(IO_Base + 0x13c))

// interrupt force for proc1
#define PROC1_INTF0 ((volatile unsigned int *)(IO_Base + 0x140))
#define PROC1_INTF1 ((volatile unsigned int *)(IO_Base + 0x144))
#define PROC1_INTF2 ((volatile unsigned int *)(IO_Base + 0x148))
#define PROC1_INTF3 ((volatile unsigned int *)(IO_Base + 0x14c))

// interrupt stats after masking and forcing for proc1
#define PROC1_INTS0 ((volatile unsigned int *)(IO_Base + 0x150))
#define PROC1_INTS1 ((volatile unsigned int *)(IO_Base + 0x154))
#define PROC1_INTS2 ((volatile unsigned int *)(IO_Base + 0x158))
#define PROC1_INTS3 ((volatile unsigned int *)(IO_Base + 0x15c))

// interrupt enable for dormant_wake 
#define DORMANT_WAKE_INTE0 ((volatile unsigned int *)(IO_Base + 0x160))
#define DORMANT_WAKE_INTE1 ((volatile unsigned int *)(IO_Base + 0x164))
#define DORMANT_WAKE_INTE2 ((volatile unsigned int *)(IO_Base + 0x168))
#define DORMANT_WAKE_INTE3 ((volatile unsigned int *)(IO_Base + 0x16c))

// interrupt force for dormant_wake 
#define DORMANT_WAKE_INTF0 ((volatile unsigned int *)(IO_Base + 0x170))
#define DORMANT_WAKE_INTF1 ((volatile unsigned int *)(IO_Base + 0x174))
#define DORMANT_WAKE_INTF2 ((volatile unsigned int *)(IO_Base + 0x178))
#define DORMANT_WAKE_INTF3 ((volatile unsigned int *)(IO_Base + 0x17c))

// interrupt stats after masking and forcing for dormant_wake
#define DORMANT_WAKE_INTS0 ((volatile unsigned int *)(IO_Base + 0x180))
#define DORMANT_WAKE_INTS1 ((volatile unsigned int *)(IO_Base + 0x184))
#define DORMANT_WAKE_INTS2 ((volatile unsigned int *)(IO_Base + 0x188))
#define DORMANT_WAKE_INTS3 ((volatile unsigned int *)(IO_Base + 0x18c))

// ****************************** END OF IO BANK 0 ***************************************



// ****************************** PAD CONTROL USER BANK **********************************

// set to 0x0 for 3.3V, 0x1 for 1.8V

// GPIO PAD functionality
// #define GPIO_PAD_REG[NUM_OF_GPIO];

// typedef struct{
//     uint8_t pin_no;
//     uint16_t offset;
// }gpio_pad_reg;

// #define GPIO0_PAD_REG  ((volatile unsigned int *)(PADS_BANK0_Base + 0x04))         
// #define GPIO1_PAD_REG  ((volatile unsigned int *)(PADS_BANK0_Base + 0x08))         
// #define GPIO2_PAD_REG  ((volatile unsigned int *)(PADS_BANK0_Base + 0x0c))         
// #define GPIO3_PAD_REG  ((volatile unsigned int *)(PADS_BANK0_Base + 0x10))         
// #define GPIO4_PAD_REG  ((volatile unsigned int *)(PADS_BANK0_Base + 0x14))         
// #define GPIO5_PAD_REG  ((volatile unsigned int *)(PADS_BANK0_Base + 0x18))         
// #define GPIO6_PAD_REG  ((volatile unsigned int *)(PADS_BANK0_Base + 0x1c))         
// #define GPIO7_PAD_REG  ((volatile unsigned int *)(PADS_BANK0_Base + 0x20))         
// #define GPIO8_PAD_REG  ((volatile unsigned int *)(PADS_BANK0_Base + 0x24))         
// #define GPIO9_PAD_REG  ((volatile unsigned int *)(PADS_BANK0_Base + 0x28))         
// #define GPIO10_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x2c))         
// #define GPIO11_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x30))         
// #define GPIO12_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x34))         
// #define GPIO13_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x38))         
// #define GPIO14_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x3c))         
// #define GPIO15_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x40))         
// #define GPIO16_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x44))         
// #define GPIO17_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x48))         
// #define GPIO18_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x4c))         
// #define GPIO19_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x50))         
// #define GPIO20_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x54))         
// #define GPIO21_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x58))         
// #define GPIO22_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x5c))         
// #define GPIO23_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x60))         
// #define GPIO24_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x64))         
// #define GPIO25_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x68))         
// #define GPIO26_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x6c))         
// #define GPIO27_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x70))         
// #define GPIO28_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x74))         
// #define GPIO29_PAD_REG ((volatile unsigned int *)(PADS_BANK0_Base + 0x78))         

// GPIO PAD functionality types
#define OUTPUT_DISABLE_BIT 7 
#define INPUT_ENABLE_BIT 6

#define DRIVE_STRENGTH_BIT 4

typedef enum {
    DRIVE_STRENGTH_2mA  = 0,
    DRIVE_STRENGTH_4mA  = 1,
    DRIVE_STRENGTH_8mA  = 2,
    DRIVE_STRENGTH_12mA = 3,
}drive_strength;

#define PULL_UP_BIT 3
#define PULL_DOWN_BIT 2 

typedef enum {
    PULL_UP_ENABLE = 1,
    PULL_DOWN_ENABLE = 0
}pull_up_down;

#define ENABLE_SCHMITT_TRIGGER_BIT 1 

typedef enum {
    DISABLE_SCHMITT_TRIGGER=0,
    ENABLE_SCHMITT_TRIGGER=1
}schmitt_en;

#define SLEW_RATE_CONTROL_BIT 0

typedef enum {
    SLEW_RATE_FAST = 0x1,
    SLEW_RATE_SLOW = 0x0
}slew_rate;

// SWCLK and SWD
#define SWCLK ((volatile unsigned int *)(PADS_BANK0_Base + 0x7c))         
#define SWD   ((volatile unsigned int *)(PADS_BANK0_Base + 0x80))         

// ****************************** END OF PAD CONTROL USER BANK ***************************

// ****************************** GPIO Function ******************************************



// ****************************** END OF GPIO Function ***********************************

// in a typical use case, the pins in the QSPI bank (QSPI_SS, QSPI_SCLK and QSPI_SD0 to QSPI_SD3) are used to execute code from an
// external flash device, leaving the User bank (GPIO0 to GPIO29) for the programmer to use.
//  All GPIOs support digital
//  input and output, but GPIO26 to GPIO29 can also be used as inputs to the chip’s Analogue to Digital Converter (ADC).
//  Each GPIO can be controlled directly by software running on the processors, or by a number of other functional blocks.


typedef struct
{
    uint32_t pin;
    uint32_t mode;
    uint32_t pad_function;
} gpio_pin_conf_t;

enum direction{
    OUT = 1,
    IN = 0
};

void gpio_conf_pin_mode(uint16_t pin_no, uint8_t mode);

void gpio_conf_pin_dir(uint16_t pin_no, uint8_t dir);

void gpio_conf_pin_pullupdown(uint16_t pin_no, pull_up_down pull_up_down);

// void gpio_set_pin_pad_function(uint16_t pin_no, uint32_t pad_function);

uint8_t gpio_read_from_pin(uint16_t pin_no);

void gpio_write_to_pin(uint16_t pin_no, uint8_t val);

#endif