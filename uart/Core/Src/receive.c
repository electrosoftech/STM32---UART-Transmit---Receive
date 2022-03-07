/*
 * receive.c
 *
 *  Created on: Feb 26, 2022
 *      Author: MUHAMMEDERKAMOKUMUŞ
 */

#include "stm32f4xx_hal.h"

uint32_t data=0;
void uartReceive(void){

	if((USART2->SR & USART_SR_RXNE)){

		data = USART2->DR;

		if(data =='K')
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET);
		else if(data =='M')
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);
		else if(data =='T')
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);
		else if(data =='Y')
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);

		else if(data =='C')
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12 | GPIO_PIN_13 |GPIO_PIN_14 |GPIO_PIN_15, GPIO_PIN_RESET);
	}
}
