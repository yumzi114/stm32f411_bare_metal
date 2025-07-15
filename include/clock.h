
#ifndef __CLOCK_H
#define __CLOCK_H

#include "main.h"



//OFFSET
#define PWR_BASE             (0x40007000UL)
#define POWER_CONTROL_OFFSET (0x00)
#define FLASH_ACR   (*(volatile uint32_t *)(0x40023C00))

#define RCC_PLLCFGR (*(volatile uint32_t *)(RCC_BASE + 0x04))
#define PWR_CR  (*(volatile uint32_t *)(PWR_BASE + POWER_CONTROL_OFFSET))



void clock_hz_config(void);

// 0x4002 3800
#endif
