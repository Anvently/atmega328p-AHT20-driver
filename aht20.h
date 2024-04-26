/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aht20.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npirard <npirard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 13:20:26 by npirard           #+#    #+#             */
/*   Updated: 2024/04/20 14:43:18 by npirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <avr/interrupt.h>
#include <avr/io.h>
#include <util/twi.h>
#include <error_led.h>
#include <util/delay.h>
#include <i2c.h>
#include <log.h>
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

#define AHT20_ERROR_UNCALIBRATED 1
#define AHT20_ERROR_BUZZY 2

#define TIMEOUT 100
#define MAX_RETRY 3

void	calibrate();
void	softReset(void);
uint8_t	getStatus();
uint8_t	isCalibrated(void);
uint8_t	isBuzzy(void);
float	getTemperature(void);
int16_t	getHumidity(void);
int8_t	measure(void);
void	displayReadings(void);
