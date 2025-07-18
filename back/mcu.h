#ifndef __MCU_H
#define __MCU_H
#include "main.h"
#define APB2_CLK_HZ      100000000UL


#define RCC_BASE      (0x40023800UL)
#define GPIOA_BASE   (0x40020000UL)
#define GPIOB_BASE   (0x40020400UL)
#define GPIO_C_BASE   (0x40020800UL)
#define APB2_BASE   (0x40010000UL)
//OFFSET
#define RCC_AHB1_CLOCK_OFFSET (0x30)
#define RCC_APB2_CLOCK_OFFSET (0x44)
#define RCC_APB1_CLOCK_OFFSET (0x40)

#define TIM1_OFFSET (0x00000000UL)

//SET define
#define RCC_AHB1_ENR (*(volatile uint32_t *)(RCC_BASE+RCC_AHB1_CLOCK_OFFSET)) 

#define RCC_CR       (*(volatile uint32_t *)(RCC_BASE+0x00)) 
#define RCC_PLLCFGR   (*(volatile uint32_t *)(RCC_BASE + 0x04))
#define RCC_CFGR      (*(volatile uint32_t *)(RCC_BASE + 0x08))


#define GPIOA_MODER  (*(volatile uint32_t *)(GPIOA_BASE + 0x00))
#define GPIOA_OTYPER (*(volatile uint32_t *)(GPIOA_BASE + 0x04))
#define GPIOA_PUPDR  (*(volatile uint32_t *)(GPIOA_BASE + 0x0C))
#define GPIOA_IDR    (*(volatile uint32_t *)(GPIOA_BASE + 0x10))
#define GPIOA_ODR    (*(volatile uint32_t *)(GPIOA_BASE + 0x14))
#define GPIOA_OSPEEDR    (*(volatile uint32_t *)(GPIOA_BASE + 0x08))
#define GPIOA_AF_0    (*(volatile uint32_t *)(GPIOA_BASE + 0x20))
#define GPIOA_AF_1    (*(volatile uint32_t *)(GPIOA_BASE + 0x24))

#define GPIOB_MODER   (*(volatile uint32_t *)(GPIOB_BASE + 0x00))
#define GPIOB_OTYPER   (*(volatile uint32_t *)(GPIOB_BASE + 0x00))
#define GPIOB_PUPDR   (*(volatile uint32_t *)(GPIOB_BASE + 0x00))
#define GPIOB_IDR     (*(volatile uint32_t *)(GPIOB_BASE + 0x10))
#define GPIOB_ODR     (*(volatile uint32_t *)(GPIOB_BASE + 0x14))
#define GPIOB_OSPEEDR    (*(volatile uint32_t *)(GPIOB_BASE + 0x08))
#define GPIOB_AF_0    (*(volatile uint32_t *)(GPIOB_BASE + 0x20))
#define GPIOB_AF_1    (*(volatile uint32_t *)(GPIOB_BASE + 0x24))



#define GPIOC_MODER   (*(volatile uint32_t *)(GPIO_C_BASE + 0x00))
#define GPIOC_OTYPER  (*(volatile uint32_t *)(GPIO_C_BASE + 0x04))
#define GPIOC_OSPEEDR (*(volatile uint32_t *)(GPIO_C_BASE + 0x08))
#define GPIOC_PUPDR   (*(volatile uint32_t *)(GPIO_C_BASE + 0x0C))
#define GPIOC_IDR     (*(volatile uint32_t *)(GPIO_C_BASE + 0x10))
#define GPIOC_ODR     (*(volatile uint32_t *)(GPIO_C_BASE + 0x14))

#define APB2_ENR (*(volatile uint32_t *)(RCC_BASE+RCC_APB2_CLOCK_OFFSET)) 
#define APB1_ENR (*(volatile uint32_t *)(RCC_BASE+RCC_APB1_CLOCK_OFFSET)) 


// DMA2 0x4002 6400
// APB2 clock 0x44 (bit4 : USART, bit0 TIM1)
// APB2 USART1 0x4001 1000
// APB2 TIM1 0x4001 0000  

// 0x4002 0800 - 0x4002 0BFF
// 0x4002 6000 - 0x4002 63FF DMA1
//
//
// Reset REG
// Address offset: 0x10
// Reset value: 0x0000 0000
//
// Clock ENABLE
// Address offset: 0x30
// Reset value: 0x0000 0000
// RCC MEM
// 0x4002 3800
#define GPIOA_PIN8   ((GPIOA_IDR >> 8) & 0x1)


void default_init();
#endif

