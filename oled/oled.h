#ifndef __oled_h
#define __oled_h
#include <wiringPi.h>
#include <iostream>

using namespace std;

#define CONTROL_CMD 0x00
#define CONTROL_DATA 0x40

int i2cSetup(int devID);
void i2cInit(int devID);
int oled_write_byte(int fd,int cmd);

#endif