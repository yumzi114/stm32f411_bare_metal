#ifndef __USART_H
#define __USART_H
#include "main.h"
#define USART_BRR_VAL(fclk, baud)   (((fclk) + ((baud)/2U)) / (baud))
#define USART1_BAUD    115200U
#define USART1_BRR_115200_16MHZ  USART_BRR_VAL(APB2_CLK_HZ, USART1_BAUD)
// #define USART_BASE   (0x40011000UL)
#define APB2_CLK_HZ      100000000UL
typedef struct {
    volatile uint32_t SR;        // 0x00
    volatile uint32_t DR;
    volatile uint32_t BRR;
    volatile uint32_t CR1;
    volatile uint32_t CR2;
    volatile uint32_t CR3;
    volatile uint32_t GTPR;
} USART_TypeDef;

#define USART1_BASE   (0x40011000UL)
#define USART1 ((USART_TypeDef *) USART1_BASE)

void uart1_init();
void uart1_send_char(char c);
void uart1_send_str(const char* s);

#endif
