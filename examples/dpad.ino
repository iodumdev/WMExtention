#include <WMExtention.h>

#define BTN_UP 2
#define BTN_DOWN 3
#define BTN_LEFT 4
#define BTN_RIGHT 5

byte controller_report[8] = {0x5F, 0xDF, 0x8F, 0x00, 0xFF, 0xFF, 0x00, 0x00};

void wmQuery()
{
    WME.newAction(controller_report);
}

void setup()
{
    pinMode(BTN_UP, INPUT_PULLUP);
    pinMode(BTN_DOWN, INPUT_PULLUP);
    pinMode(BTN_LEFT, INPUT_PULLUP);
    pinMode(BTN_RIGHT, INPUT_PULLUP);
    WME.init(wmQuery);
}

void loop()
{
    if (!digitalRead(BTN_UP)) controller_report[5] &= B11111110;
    if (!digitalRead(BTN_DOWN)) controller_report[4] &= B10111111;
    if (!digitalRead(BTN_LEFT)) controller_report[5] &= B11111101;
    if (!digitalRead(BTN_RIGHT)) controller_report[4] &= B01111111;
    delay(1);
}