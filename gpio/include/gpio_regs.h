#include <stdint.h>

// SIO base address
uint32_t SIO_base = 0xd0000000;

// offsets defined for SIO registers
uint32_t * SIO_CPUID               =(uint32_t*)0xd0000000;
uint32_t * SIO_GPIO_IN             =(uint32_t*)0xd0000004;
uint32_t * SIO_GPIO_HI_IN          =(uint32_t*)0xd0000008;
uint32_t * SIO_GPIO_OUT            =(uint32_t*)0xd0000010;
uint32_t * SIO_GPIO_OUT_SET        =(uint32_t*)0xd0000014;
uint32_t * SIO_GPIO_OUT_CLR        =(uint32_t*)0xd0000018;
uint32_t * SIO_GPIO_OUT_XOR        =(uint32_t*)0xd000001c;
uint32_t * SIO_GPIO_OE             =(uint32_t*)0xd0000020;
uint32_t * SIO_GPIO_OE_SET         =(uint32_t*)0xd0000024;
uint32_t * SIO_GPIO_OE_CLR         =(uint32_t*)0xd0000028;
uint32_t * SIO_GPIO_OE_XOR         =(uint32_t*)0xd000002c;
uint32_t * SIO_GPIO_HI_OUT         =(uint32_t*)0xd0000030;
uint32_t * SIO_GPIO_HI_OE          =(uint32_t*)0xd0000040;
uint32_t * SIO_GPIO_HI_OE_SET      =(uint32_t*)0xd0000044;
uint32_t * SIO_GPIO_HI_OE_CLR      =(uint32_t*)0xd0000048;
uint32_t * SIO_GPIO_HI_OE_XOR      =(uint32_t*)0xd000004c;


uint32_t PADS_BANK0_BASE = 0x4001c000;

uint32_t *VOLTAGE_SELECT = (uint32_t*) 0x4001c000;