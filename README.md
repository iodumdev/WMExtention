# Wii Remote extention Arduino library.
Based on https://eleccelerator.com/wiimote-extension-code/
## API
### WME.init(handler)
Library initialization. Takes a pointer to a handler.
### WME.getReg(unsigned char addr)
Returns the value of the TWI register.
### WME.newAction(unsigned char * report)
Writes to the buffer the state of the buttons. See https://wiibrew.org/wiki/Wiimote/Extension_Controllers/Classic_Controller#Data_Format
## Example
```c++
#include <WMExtention.h>

byte controller_report[8] = {0x5F, 0xDF, 0x8F, 0x00, 0xFF, 0xFF, 0x00, 0x00};

void wmQuery(){
  WME.newAction(controller_report);
}

void setup(){
  WME.init(wmQuery);
}

void loop(){
  // write buttons states to controller_report
}
```
