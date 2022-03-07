/*
 * transmit.c
 *
 *  Created on: Feb 26, 2022
 *      Author: MUHAMMEDERKAMOKUMUŞ
 */

#include "stm32f4xx_hal.h"

void uartTransmit(void){

	for(int i = 'A' ; i <= 'Z' ; i++)
	{

		USART2->DR = i;
		while((USART2->SR & USART_SR_TXE) == 0)
		;

		if(i=='Z'){

			USART2->DR = '\n';
			while((USART2->SR & USART_SR_TXE) == 0)
			;

		}

	}
}
