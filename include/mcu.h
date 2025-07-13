#ifndef __MCU_H
#define __MCU_H
#define RCC_BASE      (0x40023800UL)
#define GPIO_C_BASE   (0x40020800UL)
//OFFSET
#define RCC_AHB1_CLOCK_OFFSET (0x30)


//SET define
#define RCC_AHB1_ENR (*(volatile uint32_t *)(RCC_BASE+RCC_AHB1_CLOCK_OFFSET)) 
#define GPIOC_MODER   (*(volatile uint32_t *)(GPIO_C_BASE + 0x00))
#define GPIOC_OTYPER  (*(volatile uint32_t *)(GPIO_C_BASE + 0x04))
#define GPIOC_OSPEEDR (*(volatile uint32_t *)(GPIO_C_BASE + 0x08))
#define GPIOC_PUPDR   (*(volatile uint32_t *)(GPIO_C_BASE + 0x0C))
#define GPIOC_IDR     (*(volatile uint32_t *)(GPIO_C_BASE + 0x10))
#define GPIOC_ODR     (*(volatile uint32_t *)(GPIO_C_BASE + 0x14))


#define GPIOA_BASE   (0x40020000UL)
#define GPIOA_MODER  (*(volatile uint32_t *)(GPIOA_BASE + 0x00))
#define GPIOA_OTYPER (*(volatile uint32_t *)(GPIOA_BASE + 0x04))
#define GPIOA_PUPDR  (*(volatile uint32_t *)(GPIOA_BASE + 0x0C))
#define GPIOA_ODR    (*(volatile uint32_t *)(GPIOA_BASE + 0x14))

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
void default_init();
#endif

