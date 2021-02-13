#include "oled.h"

int i2cSetup(int devID){
    return wiringPiI2CSetup(devID);
}

void i2cInit(int devID){
    int fd;
    fd=i2cSetup(devID);

    if(fd>0){
        oled_write_byte(devID,0xae);
        oled_write_byte(devID,0xd5);
        oled_write_byte(devID,0x80);
        oled_write_byte(devID,0xa8);
        oled_write_byte(devID,0x1f);
        oled_write_byte(devID,0xd3);
        oled_write_byte(devID,0x00);
        oled_write_byte(devID,0x40);
        oled_write_byte(devID,0x8d);
        oled_write_byte(devID,0x14);
        oled_write_byte(devID,0x20);
        oled_write_byte(devID,0x02);
        oled_write_byte(devID,0xa1);
        oled_write_byte(devID,0xa1);
        oled_write_byte(devID,0xc8);
        oled_write_byte(devID,0xda);
        oled_write_byte(devID,0x02);
        oled_write_byte(devID,0x81);
        oled_write_byte(devID,0x8f);
        oled_write_byte(devID,0xd9);
        oled_write_byte(devID,0xf1);
        oled_write_byte(devID,0xdb);
        oled_write_byte(devID,0x40);
        oled_write_byte(devID,0xa4);
        oled_write_byte(devID,0xa6);
        oled_write_byte(devID,0x2e);
        oled_write_byte(devID,0xaf);
    }else{
        cout << "open i2c device fail"<<endl;
    }
}

int oled_write_byte(int fd,int cmd){
    return wiringPiI2CWriteReg8(fd,CONTROL_CMD,cmd);
}
