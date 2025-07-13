
#include "main.h"
int main(void) {
    default_init();
    // rcc_periph_clock_enable(RCC_GPIOC);

    // // PC13을 출력으로 설정 (블랙필 보드 LED)
    // gpio_mode_setup(GPIOC, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO13);

    while (1) {
        // gpio_toggle(GPIOC, GPIO13);

        GPIOC_ODR |= (1 << 13);
        for (volatile int i = 0; i < 1000000; i++); // 딜레이
        GPIOC_ODR &= ~(1 << 13);
        for (volatile int i = 0; i < 1000000; i++);
    }
}



