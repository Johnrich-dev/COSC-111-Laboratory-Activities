# Laboratory 2 – Working with Analog Signals

## 📌 Project Overview
This laboratory activity explores **analog signal representation** in Arduino using **Pulse Width Modulation (PWM)**. Building on the digital running light circuit from Laboratory 1, this project introduces **LED brightness control** using `analogWrite()`. The implementation emphasizes structured programming through the use of **arrays** and **`while()` loops** for pin configuration and LED sequencing.

## 🎯 Objectives
- Discuss analog signals and their implementation in an Arduino circuit  
- Understand analog-to-digital signal concepts in Arduino using PWM and `analogWrite()`  

## ⚙️ Project Description
The system controls **five LEDs** connected to Arduino pins **12, 11, 10, 9, and 8**. Each LED is assigned a specific brightness level using a PWM value stored in an array. The LEDs turn **ON sequentially** from pin 12 to pin 8 with a **1-second delay**, followed by turning **OFF sequentially** in the same order. Brightness control is achieved using `analogWrite()`.

## ✨ Features and Functionalities
- Running light sequence using PWM output
- Individual brightness levels per LED
- LED control using `analogWrite()`
- Pin configuration using an array
- Looping logic implemented using `while()` loops
- Fixed 1-second delay between LED transitions

## 🧰 Components Used
- Arduino Uno (or compatible Arduino board)
- 5 × LEDs
- 5 × Current-limiting resistors (220Ω or 330Ω)
- Breadboard
- Jumper wires

## 🔌 Pin Configuration
| LED Order | Arduino Pin | Brightness (PWM) |
|----------|-------------|------------------|
| LED 1 | Pin 12 | 255 |
| LED 2 | Pin 11 | 20 |
| LED 3 | Pin 10 | 80 |
| LED 4 | Pin 9  | 100 |
| LED 5 | Pin 8  | 150 |

> **Note:** `analogWrite()` produces true brightness control only on PWM-capable pins. On Arduino Uno, PWM pins are **3, 5, 6, 9, 10, and 11**. LEDs connected to non-PWM pins may behave as ON/OFF.

## 🔄 System Logic / How It Works
1. LED pin numbers and corresponding brightness values are stored in arrays.
2. In `setup()`, a `while()` loop sets all LED pins as `OUTPUT`.
3. In `loop()`:
   - LEDs turn **ON one by one**, applying their assigned brightness using `analogWrite()`.
   - After all LEDs are ON, they turn **OFF one by one** using `analogWrite(pin, 0)`.
4. Each LED transition includes a **1-second delay**.

## 💻 Software Requirements
- Arduino IDE
- No external libraries required

## ▶️ How to Run the Project
1. Connect LEDs according to the pin configuration table.
2. Open the `.ino` file in Arduino IDE.
3. Select the correct board and COM port.
4. Upload the program to Arduino.
5. Observe the running light pattern with varying LED brightness.

## 📘 Learning Outcome
This laboratory activity reinforces understanding of:
- PWM-based analog output in Arduino
- LED brightness control using `analogWrite()`
- Use of arrays for scalable hardware control
- `while()` loop implementation in embedded programming

## 🧑‍💻 Author
John Rich  
Arduino Laboratory Exercises
