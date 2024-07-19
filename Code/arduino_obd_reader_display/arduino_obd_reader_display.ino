// IMPORTANT: Changed delay in ISO9141 library to match logic analyzer findings on K-Line - specifically, changed initialization serial timeout to 150ms

#include "Arduino.h"
// Be sure that the AltSoftSerial library is available, download it from http://www.pjrc.com/teensy/td_libs_AltSoftSerial.html"
#include "AltSoftSerial.h"


#include "OBD9141.h"

// Pin definitions for TI LIN bus transceiver
#define RX_PIN 8   // connect to transceiver Rx
#define TX_PIN 9   // connect to transceiver Tx
#define EN_PIN 11  //  pin will be set high (connect to EN pin of SN65HVDA100)

// Pin definitions for 7 LED display
#define GREEN_ONE 13
#define GREEN_TWO 7
#define GREEN_THREE 6
#define YELLOW_ONE 5
#define YELLOW_TWO 4
#define RED_ONE 3
#define RED_TWO 2

AltSoftSerial altSerial;

OBD9141 obd;


void setup() {

  // Set all LED pins as outputs
  pinMode(GREEN_ONE, OUTPUT);
  pinMode(GREEN_TWO, OUTPUT);
  pinMode(GREEN_THREE, OUTPUT);
  pinMode(YELLOW_ONE, OUTPUT);
  pinMode(YELLOW_TWO, OUTPUT);
  pinMode(RED_ONE, OUTPUT);
  pinMode(RED_TWO, OUTPUT);

  Serial.begin(9600);
  delay(2000);
  pinMode(EN_PIN, OUTPUT);
  digitalWrite(EN_PIN, HIGH);  // enable the transceiver IC.

  obd.begin(altSerial, RX_PIN, TX_PIN);
}

void loop() {
  Serial.println("Looping");

  bool init_success = obd.init(); // Attempt to initialize connection with ECU
  Serial.print("init_success:");
  Serial.println(init_success);

  if (init_success) {

    startup(); // Display startup sequence on LEDs

    bool res;
    int RPM;
    while (1) {

      res = obd.getCurrentPID(0x0C, 2); // request current RPM value
      if (res) {
        Serial.print("Result 0x0C (RPM): ");
        RPM = (obd.readUint16() / 4); // convert to usable value
        Serial.println(RPM);
        displayRPM(RPM); // display on LED series
      }

      Serial.println();

      delay(100); // wait 100ms to loop
    }
  }
  delay(3000);
}