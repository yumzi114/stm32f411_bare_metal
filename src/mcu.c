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
  //PC13 OUTPUT CLEAER
  GPIOC_MODER &= ~(0x3 << (13 * 2));
  GPIOC_MODER |=  (0x1 << (13 * 2));
  
  GPIOC_ODR |= (1 << 13);


  //PA8 INPUT CLEAER
  GPIOA_MODER &= ~(0x3 << (8 * 2));
  GPIOA_MODER |=  (0x0 << (8 * 2));
  //PA8 PULLUP
  GPIOA_PUPDR &= ~(0x3 << (8 * 2));
  GPIOA_PUPDR |=  (0x1 << (8 * 2));
  
}
