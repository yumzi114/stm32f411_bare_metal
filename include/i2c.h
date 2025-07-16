
#ifndef __I2C_H
#define __I2C_H

#include "main.h"

#define APB1_BASE (0x40000000UL)
#define I2C1_BASE (0x40005400UL)

//OFFSET
// #define RCC_APB1RSTR (0x20)


#define I2C_CR1 (0x00)
#define I2C_CR2 (0x04)
#define I2C_OAR1 (0x08)
#define I2C_OAR2 (0x0C)
#define I2C_DR (0x10)

#define I2C_SR1 (0x14)
#define I2C_SR2 (0x18)
#define I2C_CCR (0x1C)
#define I2C_TRISE (0x20)
#define I2C_FLTR (0x24)

#define GPIOB_AF_0    (*(volatile uint32_t *)(GPIOB_BASE + 0x20))
#define GPIOB_AF_1    (*(volatile uint32_t *)(GPIOB_BASE + 0x24))

#define I2C1_CCR    (*(volatile uint32_t *)(I2C1_BASE + I2C_CCR))
#define I2C1_CR1    (*(volatile uint32_t *)(I2C1_BASE + I2C_CR1))
#define I2C1_CR2    (*(volatile uint32_t *)(I2C1_BASE + I2C_CR2))
#define I2C1_SR1    (*(volatile uint32_t *)(I2C1_BASE + I2C_SR1))
#define I2C1_SR2    (*(volatile uint32_t *)(I2C1_BASE + I2C_SR2))
#define I2C1_OAR1   (*(volatile uint32_t *)(I2C1_BASE + I2C_OAR1))
#define I2C1_TRISE    (*(volatile uint32_t *)(I2C1_BASE + I2C_TRISE))
#define I2C1_DR    (*(volatile uint32_t *)(I2C1_BASE + I2C_DR))
// AF04
// PB6 CLK
// PB6 SDA
// APB1 0x4000 0000
// I2C1 0x4000 5400 
// PWR 0x4000 7000
void i2c1_init();
void i2c1_reg_init();
void i2c_write();
void ssd1306_i2c_cmd(uint8_t cmd);
void ssd1306_init(void);
void ssd1306_clear(void);
// void ssd1306_draw_char(uint8_t col, uint8_t page, char c);
void ssd1306_draw_str(uint8_t col, uint8_t page, const char* str);
#endif
