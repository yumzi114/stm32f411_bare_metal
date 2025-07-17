
#include "main.h"
volatile int _Cnt;

enum{
    first, two, three
};
int last_menu = -1;
int last_btn = 1;
int main(void) {
    clock_hz_config();
    default_init();
    uart1_init();
    i2c1_init();
    ssd1306_init();
    int menu = first;
    while (1) {
        
        // GPIOC_ODR ^= (1<<13);
        // for(volatile int i=0; i<200000; ++i);
        // GPIOC_ODR &= ~(1 << 13);
        GPIOC_ODR |= (1 << 13);
        int btn = GPIOA_PIN8;
        if (!btn && last_btn) { 
            menu = (menu == three) ? first : menu + 1;
            GPIOC_ODR ^= (1<<13);
        }
        last_btn = btn;

        if (menu != last_menu) { 
            ssd1306_clear();
            ssd1306_draw_str(0, 0, "HELLO!");
            switch (menu) {
                case first:
                    ssd1306_draw_str(0, 2, "MENU 1");
                    uart1_send_str("MENU 1 selected\r\n");
                    break;
                case two:
                    ssd1306_draw_str(0, 2, "MENU 2");
                    uart1_send_str("MENU 2 selected\r\n");
                    break;
                case three:
                    ssd1306_draw_str(0, 2, "MENU 3");
                    uart1_send_str("MENU 3 selected\r\n");
                    break;
            }
            last_menu = menu;
        }
    }
}
