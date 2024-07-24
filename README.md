# K-Line (ISO9141) Shift Indicator
A DIY shift indicator for manual transmission cars like my Mazda MX-5 with a K-Line (ISO9141) OBDII interface. The device uses a series of LEDs that illuminate based on engine speed (RPM) to help the driver know when to shift gears in high-pressure situations. My technical writeup for this project, which includes rationale, insight into my design/development process, and future plans can be found [here](https://drive.google.com/file/d/1h4sEP5iF2pkmRt12-wAFUMqSv9QvsOz3/view). Additionally, here are videos of the [startup sequence](https://drive.google.com/file/d/1yGfBQFOaLi5DHMowFaSR_DUKHt-pPL1-/view?usp=sharing) and the [device in action](https://drive.google.com/file/d/1uUzjxnDBYHzpRwuf0LmYo11RxKfqu849/view?usp=sharing).  

## Features
- Displays engine RPM using a set of seven LEDs
- Has three distinct LED colors to show progression from low to high RPM (green > blue > red)
- Begins illuminating LEDs at the lower end of shift range (3.5k) and fully illuminates by the higher end (6k), with equal steps in between
- Mounts to the dashboard without significantly obstructing the driver's view of the road
- Doesn't require any modifications to wiring/electronics of the car (plug-and-play)

## Files
The file structure of this repository is as follows: 

```
diy-shift-indicator
│   K-Line (ISO 9141) Shift Indicator Writeup.pdf -- technical writeup on design/development process and future plans
│   LICENSE
│   README.md
│
├───Code -- all Arduino code
│   ├───arduino_obd_reader_display -- code for polling and displaying RPM using LED series
│   │       arduino_obd_reader_display.ino -- handles initialization/communication over LIN bus
│   │       LED_driver.ino -- defines functions to drive and reset LEDs, provides displayRPM functionality
│   │
│   ├───LED_test -- tester sketch to ensure LED series is working
│   │       LED_test.ino
│   │
│   └───modified_iso9141_library -- modified version of the OBD9141 Arduino library used in display program
│           OBD9141.cpp
│           OBD9141.h
│
├───Debug -- Saleae logic analyzer capture files, useful for debugging initialization/connection with ECU
│       First_Success_TX_and_KLINE_Logic.sal
│       RX_Logic.sal
│       TX_and_KLINE_Logic.sal
│       TX_Logic.sal
│
└───Design -- CAD/design files from the prototyping process
    │   Device BOM.xlsx -- full bill of materials for the final product (PCB, boards, wiring, enclosure, etc.)
    │
    ├───Electronics -- breadboard, schematic, and PCB design files
    │   ├───Fritzing (Breadboard)
    │   │       Prototype Design.fzz -- breadboard setup designed for original prototype/testbed
    │   │       SN65HVDA195 IC Part.fzz -- custom Fritzing part designed for LIN transceiver IC
    │   │
    │   └───KiCad (PCB)
    │       └───Shift_Indicator_PCB
    │           │   freerouting.dsn
    │           │   Shift_Indicator_PCB.kicad_pcb -- PCB design for final product, can be exported to Gerbers for fabrication
    │           │   Shift_Indicator_PCB.kicad_pcb.zip
    │           │   Shift_Indicator_PCB.kicad_prl
    │           │   Shift_Indicator_PCB.kicad_pro
    │           │   Shift_Indicator_PCB.kicad_sch -- schematic defining all electrical connections for PCB
    │           │   Shift_Indicator_PCB.net -- netlist used to transfer schematic data to PCB design
    │           │   Shift_Indicator_PCB_BOM.csv -- bill of materials for PCB
    │
    └───Mechanics -- enclosure/lid design files
            Enclosure.3mf -- Bambu slicer file for 3D printing enclosure and lid
            Enclosure.stl -- CAD design for device enclosure, can be mounted to car dashboard 
            Lid.stl -- CAD design for lid for the enclosure
```
