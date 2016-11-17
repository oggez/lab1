﻿/*
 * delay.c
 *
 * Created: 2016-11-01
 *  Author: Magnus Krampell
 */ 

#include "delay.h"

void delay_1_micros() {
	volatile uint8_t j=0;
	j++;
	j++;
}
void delay_micros(uint8_t n)   {
	int i;
	for(i = 0; i<=n; i++){
	delay_1_micros();
	}
}
void delay_ms(uint8_t n)   {
	int i;
	int temp = n*1000;
	for(i = 0; i<=temp; i++){
		delay_1_micros();
	}
}
void delay_s(uint8_t n)   {
	int i;
	int temp = n*1000000;
	for(i = 0; i<=temp; i++){
		delay_1_micros();
	}
	
}