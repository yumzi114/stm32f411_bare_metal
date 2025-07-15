#include "main.h"

#define TIM1_EN   (1U << 0)
#define USART1_EN   (1U << 4)
#define TE_RE_UE   (1U << 2)|(1U << 3)|(1U << 13)
#define HALF_DUPLEX   (1U << 3)
#define USART_SBK   (1U << 0)
#define USART_TCIE   (1U << 7)

void uart1_init(){
    APB2_ENR |= TIM1_EN;
    APB2_ENR |= USART1_EN;

    GPIOA_MODER &= ~(0x3 << (9 * 2));
    GPIOA_MODER |=  (0x2 << (9 * 2));
    GPIOA_MODER &= ~(0x3 << (10 * 2));
    GPIOA_MODER |=  (0x2 << (10 * 2));

    GPIOA_OTYPER &= ~((1 << 9) | (1 << 10));

    GPIOA_OSPEEDR &= ~(0x3 << (9 * 2));
    GPIOA_OSPEEDR |=  (0x3 << (9 * 2));
    GPIOA_OSPEEDR &= ~(0x3 << (10 * 2));
    GPIOA_OSPEEDR |=  (0x3 << (10 * 2));

    GPIOA_PUPDR &= ~(0x3 << (9 * 2));
    GPIOA_PUPDR &= ~(0x3 << (10 * 2));
    // GPIOA_PUPDR |=  (0x1 << (9 * 2));
    // GPIOA_PUPDR |=  (0x1 << (10 * 2));

    GPIOA_AF_1 &= ~(0xF << (1 * 4));
    GPIOA_AF_1 |= (0x7 << (1 * 4));
    GPIOA_AF_1 &= ~(0xF << (2 * 4));
    GPIOA_AF_1 |= (0x7 << (2 * 4));
    //PA8 INPUT CLEAER
    // GPIOA_MODER &= ~(0x3 << (8 * 2));
    // GPIOA_MODER |=  (0x0 << (8 * 2));
    //PA8 PULLUP
    // GPIOA_PUPDR &= ~(0x3 << (8 * 2));
    // GPIOA_PUPDR |=  (0x1 << (8 * 2));
    USART1_CR1 |=  TE_RE_UE;
    USART1_BRR = USART1_BRR_115200_16MHZ;
    // USART1_CR3 |= HALF_DUPLEX ;
}

void uart1_loop(void){
    USART1_DR='a';
    while (!(USART1_SR & (1 << 6))); 
}

void uart1_send_char(char c) {
    while (!(USART1_SR & (1 << 7)));
    USART1_DR = c;
}
void uart1_send_str(const char* s) {
    while (*s) {
        uart1_send_char(*s++);
    }
}