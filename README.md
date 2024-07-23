# K-Line (ISO9141) Shift Indicator
A DIY shift indicator for manual transmission cars like my Mazda MX-5 with a K-Line (ISO9141) OBDII interface. (TODO: add sentence about what it is/does) My technical writeup for this project can be found [here](https://drive.google.com/file/d/1h4sEP5iF2pkmRt12-wAFUMqSv9QvsOz3/view).  

TODO: add pictures?

## Features
TODO: add requirements/features section

## Files
The file structure of this repository is as follows: 

```
diy-shift-indicator
│   K-Line (ISO 9141) Shift Indicator Writeup.pdf
│   LICENSE
│   README.md
│
├───Code
│   ├───arduino_obd_reader_display
│   │       arduino_obd_reader_display.ino
│   │       LED_driver.ino
│   │
│   ├───LED_test
│   │       LED_test.ino
│   │
│   └───modified_iso9141_library
│           OBD9141.cpp
│           OBD9141.h
│
├───Debug
│       First_Success_TX_and_KLINE_Logic.sal
│       RX_Logic.sal
│       TX_and_KLINE_Logic.sal
│       TX_Logic.sal
│
└───Design
    │   Device BOM.xlsx
    │
    ├───Electronics
    │   ├───Fritzing (Breadboard)
    │   │       Prototype Design.fzz
    │   │       SN65HVDA195 IC Part.fzz
    │   │
    │   └───KiCad (PCB)
    │       └───Shift_Indicator_PCB
    │           │   freerouting.dsn
    │           │   Shift_Indicator_PCB.kicad_pcb
    │           │   Shift_Indicator_PCB.kicad_pcb.zip
    │           │   Shift_Indicator_PCB.kicad_prl
    │           │   Shift_Indicator_PCB.kicad_pro
    │           │   Shift_Indicator_PCB.kicad_sch
    │           │   Shift_Indicator_PCB.net
    │           │   Shift_Indicator_PCB_BOM.csv
    │
    └───Mechanics
            Enclosure.3mf
            Enclosure.stl
            Lid.stl
```

Design - electronics design (Fritzing), will contain CAD, PCB?, etc.  
Code - Arduino sketches and other code  
Debug - capture files from Saleae logic analyzer used to read the value of logic signals throughout the circuit
