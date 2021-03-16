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
    memcpy(twi_reg, d, 8);
}

unsigned char WMExtention::getReg(unsigned char addr)
{
    return twi_reg[addr];
}