#include "main.h"

void default_init(){
  //GPIOA ENABLE
  RCC_AHB1_ENR |= (1 << 0);
  //GPIOA ENABLE
  RCC_AHB1_ENR |= (1 << 1);
  //GPIOC ENABLE
  RCC_AHB1_ENR |= (1 << 2);
  
  // GPIOA_MODER &= ~(0x3 << (1 * 2));
  // GPIOA_MODER |=  (0x1 << (1 * 2));

  // GPIOA_OTYPER &= ~(1 << 1); // Push-pull
  // GPIOA_PUPDR &= ~(0x3 << (1 * 2));
  GPIOC_MODER &= ~(0x3 << (13 * 2));
  GPIOC_MODER |=  (0x1 << (13 * 2));
  APB2_ENR |= (1 << 0);
  APB2_ENR |= (1 << 4);
  GPIOC_OTYPER &= ~(1 << 13); // Push-pull (0)
}
