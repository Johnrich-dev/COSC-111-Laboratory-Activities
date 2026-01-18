# Laboratory 1 – Working with Digital 

## 📌 Project Overview
This laboratory activity introduces Arduino as a foundational platform for **IoT system implementation**, focusing on **digital signal control** using multiple LEDs. The project demonstrates a basic **running light sequence** implemented using **arrays** and **for loops**, reinforcing efficient pin management and sequential digital output control.

## 🎯 Objectives
- Review Arduino as a device for IoT systems implementation  
- Discuss digital signals and their implementation in an Arduino circuit  

## ⚙️ Project Description
The system controls **five LEDs** connected to Arduino digital pins **12, 11, 10, 9, and 8**. Using an array to store pin numbers, the Arduino turns the LEDs **ON sequentially from pin 12 down to pin 8**, followed by turning them **OFF in the same order**, with a **1-second delay** between each LED state change. Digital output is controlled using the `digitalWrite()` function.

## ✨ Features and Functionalities
- Running light sequence using digital signals
- LED control using `digitalWrite()`
- Uses an array to store LED pin numbers
- Uses `for` loops for scalable and clean code
- Fixed 1-second delay between LED transitions

## 🧰 Components Used
- Arduino Uno (or compatible Arduino board)
- 5 × LEDs
- 5 × Current-limiting resistors (220Ω or 330Ω)
- Breadboard
- Jumper wires

## 🔌 Pin Configuration
| LED Order | Arduino Digital Pin |
|---------|---------------------|
| LED 1 | Pin 12 |
| LED 2 | Pin 11 |
| LED 3 | Pin 10 |
| LED 4 | Pin 9 |
| LED 5 | Pin 8 |

## 🔄 System Logic / How It Works
1. LED pin numbers are stored in an integer array.
2. During setup, all LED pins are configured as `OUTPUT` using a `for` loop.
3. In the main loop:
   - LEDs turn **ON one by one** from pin 12 to pin 8 with a 1-second delay.
   - After all LEDs are ON, they turn **OFF one by one** in the same order.
4. The sequence repeats continuously.

## 💻 Software Requirements
- Arduino IDE
- No external libraries required

## ▶️ How to Run the Project
1. Connect the LEDs to the Arduino based on the pin configuration table.
2. Open the `.ino` file in Arduino IDE.
3. Select the correct board and COM port.
4. Upload the program to Arduino.
5. Observe the running light LED pattern.

## 📘 Learning Outcome
This laboratory activity helps students understand:
- Digital signal output in Arduino
- Efficient pin handling using arrays
- Loop-based logic for hardware control
- Foundational concepts used in IoT systems

## 🧑‍💻 Author
John Rich  
Arduino Laboratory Exercises
