#include "main.h"
#define PLLM (16 << 0)
#define PLLN (200 << 6)
#define PLLP (0 << 16)
#define PLLSRC (0 << 22)


void clock_hz_config(void){
    // 1. Power: VOS 최대 (PWR_CR, 0x3 << 14)
    FLASH_ACR |= (1 << 8); // Prefetch enable
    FLASH_ACR |= (1 << 9); // ART enable
    FLASH_ACR = (FLASH_ACR & ~0x7) | (3 << 0); // 3 wait states

    PWR_CR &= ~(0x3 << 14) ;
    PWR_CR |=  (0x3 << 14);

    // 2. HSI ON & RDY 대기
    RCC_CR |= (1 << 0);   
    while (!(RCC_CR & (1 << 1)));

    // 3. PLLCFGR (PLLM=16, PLLN=200, PLLP=2, PLLSRC=HSI)
    RCC_PLLCFGR = (16 << 0)    // PLLM = 16
                | (200 << 6)   // PLLN = 200
                | (0 << 16)    // PLLP = 2 (0b00)
                | (0 << 22);   // PLLSRC = HSI (0)

    // 4. PLL ON & RDY 대기
    RCC_CR |= (1 << 24);
    while (!(RCC_CR & (1 << 25)));

    // 5. AHB 프리스케일러 DIV1 (100MHz)
    RCC_CFGR &= ~(0xF << 4);

    // 6. APB2 프리스케일러 DIV1 (100MHz)
    RCC_CFGR &= ~(0x7 << 13);
    
    // 7. SYSCLK 소스: PLL로 전환
    RCC_CR |= (1 << 24); // PLL ON
    
    // RCC_CR |= (1 << 24); 
    RCC_CFGR &= ~(0x3 << 0);
    RCC_CFGR |=  (0x2 << 0);
    while ((RCC_CFGR & (0x3 << 2)) != (0x2 << 2));
}