#ifndef __I2C_H
#define __I2C_H

#include "main.h"
#define I2C1_BASE (0x40005400UL)

typedef struct {
    volatile uint32_t CR1;    
    volatile uint32_t CR2;   
    volatile uint32_t OAR1;  
    volatile uint32_t OAR2;    
    volatile uint32_t DR;      
    volatile uint32_t SR1;     
    volatile uint32_t SR2;    
    volatile uint32_t CCR;    
    volatile uint32_t TRISE;    
    volatile uint32_t FLTR;
} I2C_TypeDef;

void i2c1_init();
I2C_TypeDef* i2c1_reg_init();
void i2c_write();

// void ssd1306_draw_char(uint8_t col, uint8_t page, char c);
#define I2C1 ((I2C_TypeDef *) I2C1_BASE)
#endif