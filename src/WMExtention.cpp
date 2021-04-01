/*
 * Based on https://eleccelerator.com/wiimote-extension-code/
 * Modified by Iodum https://github.com/iodumdev
 */

#include "WMExtention.h"

// ID classic controller
static unsigned char deviceID[6] = {0x00, 0x00, 0xA4, 0x20, 0x01, 0x01};

// calibration data
static unsigned char cal_data[32] = {
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00};

WMExtention::WMExtention()
{
}

void WMExtention::init(void (*function)(void))
{
    wm_init(deviceID, cal_data, function);
}

void WMExtention::newAction(unsigned char *d)
{
    // load button data from user application
    memcpy((void*)twi_reg, d, 8);
}

unsigned char WMExtention::getReg(unsigned char addr)
{
    return twi_reg[addr];
}