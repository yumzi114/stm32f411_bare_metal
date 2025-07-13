
#include "main.h"
volatile int _Cnt;


int main(void) {
    // SEGGER_RTT_Init(); 
    default_init();
    // rcc_periph_clock_enable(RCC_GPIOC);

    // // PC13을 출력으로 설정 (블랙필 보드 LED)
    // gpio_mode_setup(GPIOC, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO13);
    
    
    while (1) {
        // gpio_toggle(GPIOC, GPIO13);
        // SEGGER_RTT_PutChar(0, 'A');
        GPIOC_ODR |= (1 << 13);
        for (volatile int i = 0; i < 100000; i++); // 딜레이
        // for (volatile int i = 0; i < 1000000; i++);
        // SEGGER_RTT_PutChar(0, 'H');
        GPIOC_ODR &= ~(1 << 13);
        for (volatile int i = 0; i < 100000; i++);
        // for (volatile int i = 0; i < 1000000; i++);
    }
}



