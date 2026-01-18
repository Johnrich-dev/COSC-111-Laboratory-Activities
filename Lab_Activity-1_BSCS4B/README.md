# Laboratory 1 – Running Light Using Arduino

## 📌 Project Overview
This laboratory exercise introduces Arduino as a fundamental platform for implementing Internet of Things (IoT) systems, with a focus on understanding **digital signals** and their practical application in controlling electronic components. The project demonstrates a **running light circuit** using multiple LEDs controlled through Arduino digital output pins.

## 🎯 Objectives
- Review Arduino as a device for IoT systems implementation  
- Discuss and apply digital signals in an Arduino-based circuit  

## ⚙️ Project Description
The system implements a running light pattern using five LEDs connected to Arduino digital pins **8 to 12**. The LEDs turn **ON sequentially from pin 12 down to pin 8**, followed by turning **OFF sequentially from pin 12 down to pin 8**, with a **1-second delay** between each change. The LEDs are controlled using the `digitalWrite()` function.

## ✨ Features and Functionalities
- Sequential LED activation (running light effect)
- Digital signal control using `digitalWrite()`
- Fixed 1-second delay between LED transitions
- Demonstrates basic Arduino digital output logic

## 🧰 Components Used
- Arduino Uno (or compatible Arduino board)
- 5 × LEDs
- 5 × Resistors (220Ω or 330Ω recommended)
- Breadboard
- Jumper wires

## 🔌 Pin Configuration
| LED | Arduino Digital Pin |
|-----|---------------------|
| LED 1 | Pin 12 |
| LED 2 | Pin 11 |
| LED 3 | Pin 10 |
| LED 4 | Pin 9  |
| LED 5 | Pin 8  |

## 🔄 System Logic / How It Works
1. Arduino initializes pins **8 to 12** as digital outputs.
2. LEDs turn **ON one by one** starting from pin **12 down to pin 8**, with a 1-second delay.
3. After all LEDs are ON, they turn **OFF one by one** from pin **12 down to pin 8**, again with a 1-second delay.
4. The sequence repeats continuously.

## 💻 Software Requirements
- Arduino IDE
- Arduino USB driver (if required)

## ▶️ How to Run the Project
1. Assemble the circuit according to the pin configuration table.
2. Open the provided `.ino` file in Arduino IDE.
3. Select the correct board and COM port.
4. Upload the code to the Arduino.
5. Observe the running light pattern on the LEDs.

## 📘 Learning Outcome
This laboratory exercise strengthens understanding of:
- Digital output control in Arduino
- Use of `digitalWrite()` and `delay()`
- Basic hardware interfacing concepts essential for IoT systems

## 🧑‍💻 Author
John Rich  
Arduino Laboratory Exercises

