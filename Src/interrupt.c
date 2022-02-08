/*
 * interrupt.c
 *
 *  Created on: 8 Feb 2022
 *      Author: Taufik Hidayat
 */

#include "interrupt.h"

int counter = 0;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Instance == TIM2)
	{
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
		counter++;
	}
}
