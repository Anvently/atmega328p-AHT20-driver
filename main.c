/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npirard <npirard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:21:08 by npirard           #+#    #+#             */
/*   Updated: 2024/04/26 16:06:36 by npirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOG_LVL
 #define LOG_LVL LOG_ERROR
#endif

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <log.h>
#include <uart.h>
#include <i2c.h>
#include <aht20.h>
#include <stdlib.h>

#ifndef CPU_FREQ
 #define CPU_FREQ 16000000
#endif

#ifndef TRUE
 #define TRUE 1
#endif

#ifndef FALSE
 #define FALSE 0
#endif

#ifndef HEXCODE
 #define HEXCODE "0123456789ABCDEF"
#endif

int	main(void)
{

	/* ------------------------------- UART CONFIG ------------------------------ */

	LOGI("Starting");

	// softReset();
	
	while (1)
	{
		displayReadings();
		_delay_ms(1000);
	}


	while (1);
}