// IMPORTANT: Changed delay in ISO9141 library to match logic analyzer findings on K-Line - specifically, changed initialization serial timeout to 150ms
// TODO: add the modified library files to github
// TODO: add file for LED driver (function?) and use that here - make it so simply inputting an RPM value to that will flash the LEDs in the proper way. And a different flash for initialization sequence or any errors or out of bound values etc.

#include "Arduino.h"
// Be sure that the AltSoftSerial library is available, download it from http://www.pjrc.com/teensy/td_libs_AltSoftSerial.html"
#include "AltSoftSerial.h"


#include "OBD9141.h"

#define RX_PIN 8  // connect to transceiver Rx
#define TX_PIN 9  // connect to transceiver Tx
#define EN_PIN 11  //  pin will be set high (connect to EN pin of SN65HVDA100)

AltSoftSerial altSerial;

OBD9141 obd;


void setup(){
    Serial.begin(9600);
    delay(2000);
    pinMode(EN_PIN, OUTPUT);
    digitalWrite(EN_PIN, HIGH); // enable the transceiver IC.

    obd.begin(altSerial, RX_PIN, TX_PIN);

}
    
void loop(){
    Serial.println("Looping");

    bool init_success =  obd.init();
    Serial.print("init_success:");
    Serial.println(init_success);

    if (init_success){
        bool res;
        while(1){
            
            res = obd.getCurrentPID(0x0C, 2);
            if (res){
                Serial.print("Result 0x0C (RPM): ");
                Serial.println(obd.readUint16()/4);
            }

            Serial.println();

            delay(100);
        }
    }
    delay(3000);
}