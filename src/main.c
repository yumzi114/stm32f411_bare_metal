
#include "main.h"
volatile int _Cnt;


int main(void) {
    clock_hz_config();
    default_init();
    uart1_init();
    i2c1_init();
    ssd1306_init();
    while (1) {
        
        // GPIOC_ODR ^= (1<<13);
        // for(volatile int i=0; i<200000; ++i);
        if (!GPIOA_PIN8){

            GPIOC_ODR &= ~(1 << 13);
            ssd1306_clear();
            ssd1306_draw_str(0, 0, "HELLO!");
            ssd1306_draw_str(0, 2, "EOMI C TEST");
            // for(volatile int i=0; i<10000; ++i);
            
        }else{
            GPIOC_ODR |= (1 << 13);
            // uart1_send_char('x');
        };
    }
}



