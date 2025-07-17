#include "main.h"

void default_init(){
    RCC->AHB1ENR |= (1U << 0);
    RCC->AHB1ENR |= (1U << 1);
    RCC->AHB1ENR |= (1U << 2);

    GPIOC->MODER &= ~(0x3 << (13 * 2));
    GPIOC->MODER |=  (0x1 << (13 * 2));
    
    GPIOC->ODR   |= (1 << 13);

    GPIOA->MODER &= ~(0x3 << (8 * 2));
    GPIOA->MODER |=  (0x0 << (8 * 2));
    GPIOA->PUPDR &= ~(0x3 << (8 * 2));
    GPIOA->PUPDR |=  (0x1 << (8 * 2));
}
void clock_AHB1_100MHz_APB1_50MHz(void){
    FLASH_ACR |= (1 << 8); // Prefetch enable
    FLASH_ACR |= (1 << 9); // ART enable
    FLASH_ACR = (FLASH_ACR & ~0x7) | (3 << 0); // 3 wait states
    // 1. Power: VOS 최대 (PWR_CR, 0x3 << 14)
    PWR_CR &= ~(0x3 << 14) ;
    PWR_CR |=  (0x3 << 14);
    // 2. HSI ON & RDY 대기
    RCC->CR |= (1 << 0);   
    while (!(RCC->CR & (1 << 1)));
    // 3. PLLCFGR (PLLM=16, PLLN=200, PLLP=2, PLLSRC=HSI)
    RCC->PLLCFGR = (16 << 0)    // PLLM = 16
                | (200 << 6)   // PLLN = 200
                | (0 << 16)    // PLLP = 2 (0b00)
                | (0 << 22);   // PLLSRC = HSI (0)
    // 4. PLL ON & RDY 대기
    RCC->CR |= (1 << 24);
    while (!(RCC->CR & (1 << 25)));
    // 5. AHB 프리스케일러 DIV1 (100MHz)
    RCC->CFGR &= ~(0xF << 4);
    // 6. APB2 프리스케일러 DIV1 (100MHz)
    RCC->CFGR &= ~(0x7 << 13);
    // 6. APB1 프리스케일러 DIV2 (50MHz)
    RCC->CFGR &= ~(0x7 << 10);   // PPRE1 클리어
    RCC->CFGR |=  (0x4 << 10);   // 0b100 = DIV2
    // 7. SYSCLK 소스: PLL로 전환
    RCC->CR |= (1 << 24); // PLL ON
    // RCC_CR |= (1 << 24); 
    RCC->CFGR &= ~(0x3 << 0);
    RCC->CFGR |=  (0x2 << 0);
    while ((RCC->CFGR & (0x3 << 2)) != (0x2 << 2));
}