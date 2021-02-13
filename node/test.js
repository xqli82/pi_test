const wpi=require('wiring-pi')

wpi.setup('wpi')

const pi=0

wpi.pinMode(pi,wpi.OUTPUT)

const value =1

setInterval(() => {
    wpi.digitalWrite(pin,value)
    value=!value
    console.log(value)
}, 1000);