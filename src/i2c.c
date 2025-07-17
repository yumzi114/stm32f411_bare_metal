#include "main.h"

void i2c1_init() {
    RCC->APB1ENR |= (1U << 21);
    GPIOB->MODER &= ~(0x3 << (6 * 2));
    GPIOB->MODER |=  (0x2 << (6 * 2));
    GPIOB->MODER &= ~(0x3 << (7 * 2));
    GPIOB->MODER |=  (0x2 << (7 * 2));
    GPIOB->OTYPER |= (1 << 6) | (1 << 7);
    GPIOB->OSPEEDR &= ~(0x3 << (6 * 2));
    GPIOB->OSPEEDR |=  (0x3 << (6 * 2));
    GPIOB->OSPEEDR &= ~(0x3 << (7 * 2));
    GPIOB->OSPEEDR |=  (0x3 << (7 * 2));
    GPIOA->PUPDR &= ~(0x1 << (6 * 2));
    GPIOA->PUPDR &= ~(0x1 << (7 * 2));

    GPIOB->AFR[0] &= ~(0xF << (6 * 4));
    GPIOB->AFR[0] |= (0x4 << (6 * 4));
    GPIOB->AFR[0] &= ~(0xF << (7 * 4));
    GPIOB->AFR[0] |= (0x4 << (7 * 4));
    GPIOB->IDR=0x0000;
}
I2C_TypeDef* i2c1_reg_init() {
    I2C_TypeDef* i2c1 = I2C1; 
    i2c1->CR1 &= ~(1U << 0);
    i2c1->CR1 |= (1U << 15); 
    i2c1->CR1 &= ~(1U << 15); 
    // //주소
    i2c1->OAR1=0x4000;
    // //주변 장치 클럭 48MHz
    i2c1->CR2 = 50;      // APB1 클럭 48MHz
    i2c1->CCR = 250;       // 100kHz (Standard mode)
    i2c1->TRISE = 51;      // TRISE = 49
    i2c1->CR1 |= (1U << 0);
    return i2c1;
}
void i2c_write() {}

// void ssd1306_draw_char(uint8_t col, uint8_t page, char c) {}