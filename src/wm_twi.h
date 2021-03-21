#ifndef wm_twi_h

#include <string.h>
#include <avr/io.h>
#include <util/delay.h>
#include <util/twi.h>
#include <avr/interrupt.h>

#define twi_port PORTC
#define twi_ddr DDRC
#define twi_scl_pin 5
#define twi_sda_pin 4

#define dev_detect_port PORTC
#define dev_detect_ddr DDRC
#define dev_detect_pin 1

extern volatile unsigned char twi_reg[256];

// initialize wiimote interface with id, starting data, and calibration data
void wm_init(unsigned char *, unsigned char *, void (*)(void));

#define wm_twi_h
#endif