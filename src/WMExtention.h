/*
 * Based on https://eleccelerator.com/wiimote-extension-code/
 * Modified by Iodum https://github.com/iodumdev
 */

#ifndef WMExtention_h
#define WMExtention_h

#include "Arduino.h"

extern "C" {
#include "wm_twi.h"
}

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

class WMExtention{
    public:

        WMExtention();

        // initialize wiimote interface with id, starting data, and calibration data
        void init(void (*)(void));

        // set button data
        void newAction(unsigned char *);

        // get register data
        unsigned char getReg(unsigned char);
};

extern WMExtention WME;

#endif