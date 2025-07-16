#ifndef __UART_H
#define __UART_H
#include "main.h"
#define USART_BRR_VAL(fclk, baud)   (((fclk) + ((baud)/2U)) / (baud))
#define USART1_BAUD    115200U
#define USART1_BRR_115200_16MHZ  USART_BRR_VAL(APB2_CLK_HZ, USART1_BAUD)
#define USART_BASE   (0x40011000UL)
//OFF SET
#define SR   (0x00)
#define DR   (0x04)
#define BRR   (0x08)
#define CR1   (0x0C)
#define CR2   (0x08)
#define CR3   (0x14)

#define USART1_SR  (*(volatile uint32_t *)(USART_BASE + SR))
#define USART1_DR  (*(volatile uint32_t *)(USART_BASE + DR))
#define USART1_BRR  (*(volatile uint32_t *)(USART_BASE + BRR))
#define USART1_CR1  (*(volatile uint32_t *)(USART_BASE + CR1))
#define USART1_CR2  (*(volatile uint32_t *)(USART_BASE + CR2))
#define USART1_CR3  (*(volatile uint32_t *)(USART_BASE + CR3))

void uart1_init();
void uart1_loop();
void uart1_send_char(char c);
void uart1_send_str(const char* s);
#endif
