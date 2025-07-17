

#include "main.h"
#define BUTTON   ((GPIOA->IDR >> 8) & 0x1)

enum{
    first, two, three
};
int last_menu = -1;
int last_btn = 1;

int main(void){
    clock_AHB1_100MHz_APB1_50MHz();
    default_init();
    uart1_init();
    i2c1_init();
    I2C_TypeDef* my_i2c1 = i2c1_reg_init();
    int menu = first;
    while(1){
        // GPIOC->ODR |=  (1 << 13);
        // for (volatile int i=0; i<1000000; ++i);
        // GPIOC->ODR &= ~(1 << 13);
        // for (volatile int i=0; i<1000000; ++i);
        int btn = BUTTON;
        GPIOC->ODR |=  (1 << 13);
        if (!btn && last_btn) { 
            menu = (menu == three) ? first : menu + 1;
            uart1_send_str("MENU 1 selected\r\n");
            GPIOC->ODR &= ~(1 << 13);
            // for (volatile int i=0; i<1000000; ++i);
        }
        last_btn = btn;   
        if (menu != last_menu) { 
            ssd1306_clear(my_i2c1);
            ssd1306_draw_str(my_i2c1,0, 0, "HELLO!");
            switch (menu) {
                case first:
                    ssd1306_draw_str(my_i2c1,0, 2, "MENU 1");
                    break;
                case two:
                    ssd1306_draw_str(my_i2c1,0, 2, "MENU 2");
                    break;
                case three:
                    ssd1306_draw_str(my_i2c1,0, 2, "MENU 3");
                    break;
            }
            last_menu = menu;
        }
    }
}