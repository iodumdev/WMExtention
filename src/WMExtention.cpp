/*
 * Based on https://eleccelerator.com/wiimote-extension-code/
 * Modified by Iodum https://github.com/iodumdev
 */

#include "WMExtention.h"


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