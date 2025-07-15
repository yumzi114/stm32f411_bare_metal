
#include "main.h"
volatile int _Cnt;


int main(void) {
    clock_hz_config();
    default_init();
    uart1_init();

    while (1) {
        
        // GPIOC_ODR ^= (1<<13);
        // for(volatile int i=0; i<200000; ++i);
        if (!GPIOA_PIN8){
            uart1_send_str("OK CLICKED!\r\n");
            // uart1_send_char('o');
            GPIOC_ODR &= ~(1 << 13);
        }else{
            GPIOC_ODR |= (1 << 13);
            // uart1_send_char('x');
        };
    }
}



