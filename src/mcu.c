#include "main.h"
#define GPIOAEN   (1U << 0)
#define GPIOBEN   (1U << 1)
#define GPIOCEN   (1U << 2)

void default_init(){
  //GPIOA ENABLE
  RCC_AHB1_ENR |= GPIOAEN;
  //GPIOB ENABLE
  RCC_AHB1_ENR |= GPIOBEN;
  //GPIOC ENABLE
  RCC_AHB1_ENR |= GPIOCEN;
  //PC13 INPUT OUTPUT CLEAER
  GPIOC_MODER &= ~(0x3 << (13 * 2));
  GPIOC_MODER |=  (0x1 << (13 * 2));
  //TIM1 ENABLE
  APB2_ENR |= (1 << 0);
  //USART1 ENABLE
  APB2_ENR |= (1 << 4);
  GPIOC_OTYPER &= ~(1 << 13); // Push-pull (0)
}
