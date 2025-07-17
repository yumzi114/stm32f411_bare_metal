#include "main.h"

void uart1_init(){
    RCC->APB2ENR |= (1U << 0);
    RCC->APB2ENR |= (1U << 4);
    GPIOA->MODER &= ~(0x3 << (9 * 2));
    GPIOA->MODER |=  (0x2 << (9 * 2));
    GPIOA->MODER &= ~(0x3 << (10 * 2));
    GPIOA->MODER |=  (0x2 << (10 * 2));

    GPIOA->OTYPER &= ~((1 << 9) | (1 << 10));

    GPIOA->OSPEEDR &= ~(0x3 << (9 * 2));
    GPIOA->OSPEEDR |=  (0x3 << (9 * 2));
    GPIOA->OSPEEDR &= ~(0x3 << (10 * 2));
    GPIOA->OSPEEDR |=  (0x3 << (10 * 2));

    GPIOA->PUPDR &= ~(0x3 << (9 * 2));
    GPIOA->PUPDR &= ~(0x3 << (10 * 2));

    GPIOA->AFR[1] &= ~(0xF << (1 * 4));
    GPIOA->AFR[1] |= (0x7 << (1 * 4));
    GPIOA->AFR[1] &= ~(0xF << (2 * 4));
    GPIOA->AFR[1] |= (0x7 << (2 * 4));

    USART1->CR1 |=  (1U << 2)|(1U << 3)|(1U << 13);
    USART1->BRR = USART1_BRR_115200_16MHZ;
};
void uart1_send_char(char c){
    while (!(USART1->SR & (1 << 7)));
    USART1->DR = c;
}
void uart1_send_str(const char* s){
    while (*s) {
        uart1_send_char(*s++);
    }
}