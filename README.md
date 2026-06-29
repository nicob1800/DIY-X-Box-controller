# DIY Xbox Controller and Integrated Racing Pedals

An integrated mechatronics project combining embedded firmware, custom mechanical hardware, and ergonomic design. This repository contains the firmware for an Arduino Micro-based HID that emulates a high-precision controller with a custom-engineered racing pedal assembly.

## Technical Specifications

* **Microcontroller:** Arduino Micro (ATmega32U4).
* **Power Source:** Fully bus-powered via the USB connection to the host computer.
* **Input Hardware:** Linear sliding potentiometers for pedal axes and custom-wired button matrices for XYAB inputs.
* **Software Stack:** C++ / Arduino logic utilizing the `Joystick.h` library.
* **Mechanical Design:** Custom components designed in SolidWorks and 3D printed.

## Features

### Mechanical Engineering and Pedal Assembly
* **Biometric Modeling:** Pedal geometry was modeled in SolidWorks based on automotive measurements to ensure ergonomic pedal angles.
* **Hybrid Material Construction:** Utilizes 3D-printed pedals, aluminum bars for the pedal shafts, and a weighted 2x4 wooden base to ensure structural stability during operation.
* **Sensor Calibration:** Resolved non-linear (logarithmic) potentiometer behavior through physical alignment; sliding potentiometers were manually positioned so that pedal travel maps to the sensor's optimal linear "sweet spot".

### Hardware and PCB Integration
* **Custom Electronics Layout:** Hand-wired two dedicated protoboards for core logic and XYAB input matrices, cross-referenced with a digital 3D model for spatial optimization.
* **Modular Enclosure:** Engineered a custom 3D-printed case featuring integrated plastic hinges and a pin-locking mechanism for rapid internal access and hardware modification.

### Ergonomics and Iterative Design
* **Joystick Cap Development:** Conducted a multi-stage prototyping process for the joystick thumb cap using SolidWorks. 
    * **Phase 1 (Functional):** Focused on achieving a precise mechanical fit with the electronic joystick module.
    * **Phase 2 (Ergonomic):** Refined the geometry based on peer testing and personal use to optimize finger comfort and grip.

## Repository Structure

* `Sketch1.ino`: Core firmware containing the polling loop and input mapping logic.
* `Sketch1.sln`: Visual Studio solution file for project management.

## Installation

1. Clone the repository.
2. Open `Sketch1.ino` in the Arduino IDE.
3. Ensure the `Joystick.h` library is installed.
4. Upload the firmware to an Arduino Micro.
<img width="955" height="1274" alt="0" src="https://github.com/user-attachments/assets/79e40801-b624-4201-8f88-24fd05a88fb3" />
<img width="1699" height="1274" alt="0" src="https://github.com/user-attachments/assets/fad407d2-9ba5-4a72-bcbe-c2a0be222119" />
<img width="955" height="1274" alt="0" src="https://github.com/user-attachments/assets/9994de8b-f341-4ae6-8e33-5326053ba216" />
