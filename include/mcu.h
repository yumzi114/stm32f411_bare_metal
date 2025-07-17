#ifndef __MCU_H
#define __MCU_H
#include "main.h"

typedef struct {
    volatile uint32_t CR;          // 0x00
    volatile uint32_t PLLCFGR;     // 0x04
    volatile uint32_t CFGR;        // 0x08
    volatile uint32_t CIR;         // 0x0C
    volatile uint32_t AHB1RSTR;    // 0x10
    volatile uint32_t AHB2RSTR;    // 0x14
    volatile uint32_t AHB3RSTR;    // 0x18
    uint32_t RESERVED0;            // 0x1C
    volatile uint32_t APB1RSTR;    // 0x20
    volatile uint32_t APB2RSTR;    // 0x24
    uint32_t RESERVED1[2];         // 0x28, 0x2C
    volatile uint32_t AHB1ENR;     // 0x30
    volatile uint32_t AHB2ENR;     // 0x34
    volatile uint32_t AHB3ENR;     // 0x38
    uint32_t RESERVED2;            // 0x3C
    volatile uint32_t APB1ENR;     // 0x40
    volatile uint32_t APB2ENR;     // 0x44
} RCC_TypeDef;
typedef struct {
    volatile uint32_t MODER;    
    volatile uint32_t OTYPER;   
    volatile uint32_t OSPEEDR;  
    volatile uint32_t PUPDR;    
    volatile uint32_t IDR;      
    volatile uint32_t ODR;     
    volatile uint32_t BSRR;    
    volatile uint32_t LCKR;    
    volatile uint32_t AFR[2];
} GPIO_TypeDef;
#define RCC_BASE      (0x40023800UL)
#define GPIOA_BASE    (0x40020000UL)
#define GPIOB_BASE    (0x40020400UL)
#define GPIOC_BASE    (0x40020800UL)

#define PWR_BASE             (0x40007000UL)
#define POWER_CONTROL_OFFSET (0x00)
#define FLASH_ACR   (*(volatile uint32_t *)(0x40023C00))
#define PWR_CR  (*(volatile uint32_t *)(PWR_BASE + POWER_CONTROL_OFFSET))
#define GPIOA ((GPIO_TypeDef *) GPIOA_BASE)
#define GPIOB ((GPIO_TypeDef *) GPIOB_BASE)
#define GPIOC ((GPIO_TypeDef *) GPIOC_BASE)
#define RCC   ((RCC_TypeDef *) RCC_BASE)
// #define LED (GPIOC->ODR)
void default_init();
void clock_AHB1_100MHz_APB1_50MHz(void);
#endif



