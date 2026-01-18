# Laboratory 2 – Running Light with Analog Brightness Control (PWM)

## 📌 Project Overview
This laboratory exercise expands the running light circuit by introducing **analog signals** and how Arduino represents them through **Pulse Width Modulation (PWM)**. The activity focuses on controlling LED brightness using `analogWrite()` and applying **analog-to-digital conversion concepts** using the `map()` function. The project also reinforces structured programming by using a **while loop** and an **array** for setting pin modes.

## 🎯 Objectives
- Discuss analog signals and their implementation in an Arduino circuit  
- Understand analog-to-digital signal conversion using the `map()` function  

## ⚙️ Project Description
The system recreates the running light pattern from Laboratory 1 using LEDs connected to Arduino pins **8 to 12**. The LEDs activate sequentially from **pin 12 down to pin 8**, and then deactivate in the same order, with a **1-second delay** between changes. Unlike the first activity, this version uses `analogWrite()` to control LED brightness. Pin initialization and iteration are implemented using an **array** and a **while() loop**.

## ✨ Features and Functionalities
- Running light effect from pin 12 to pin 8 (ON then OFF sequence)
- LED brightness control using `analogWrite()`
- Uses `map()` for scaling input values to output ranges (analog-to-digital conversion concept)
- Pin setup using an array for cleaner configuration
- Looping logic implemented using `while()`

## 🧰 Components Used
- Arduino Uno (or compatible Arduino board)
- 5 × LEDs
- 5 × Resistors (220Ω or 330Ω recommended)
- Breadboard
- Jumper wires

## 🔌 Pin Configuration
| LED | Arduino Pin |
|-----|-------------|
| LED 1 | Pin 12 |
| LED 2 | Pin 11 |
| LED 3 | Pin 10 |
| LED 4 | Pin 9  |
| LED 5 | Pin 8  |

> **Note:** `analogWrite()` works on PWM-capable pins only (commonly 3, 5, 6, 9, 10, 11 on Arduino Uno). If your board does not support PWM on pins 8 and 12, the LEDs may behave as ON/OFF only. If required by your instructor, follow the lab requirement as written; otherwise, consider moving LEDs to PWM pins for true brightness control.

## 🔄 System Logic / How It Works
1. An array stores the LED pin numbers (8 to 12).
2. A `while()` loop sets all LED pins as `OUTPUT`.
3. The system runs a sequence:
   - Increase brightness / turn ON LEDs one by one from pin 12 → pin 8 (1-second delay each)
   - Decrease brightness / turn OFF LEDs one by one from pin 12 → pin 8 (1-second delay each)
4. `map()` is used to convert an input range (e.g., 0–1023 from an analog source) into a PWM brightness output range (0–255).

## 💻 Software Requirements
- Arduino IDE
- Required libraries: None (default Arduino functions only)

## ▶️ How to Run the Project
1. Assemble the circuit based on the pin configuration.
2. Open the provided `.ino` file in Arduino IDE.
3. Select your board and COM port.
4. Upload the program to Arduino.
5. Observe the LED running light pattern with brightness control.

## 📘 Learning Outcome
This laboratory exercise improves understanding of:
- Analog signal representation via PWM in Arduino
- Brightness control using `analogWrite()`
- Scaling values using `map()`
- Cleaner code structure using arrays and `while()` loops

## 🧑‍💻 Author
John Rich  
Arduino Laboratory Exercises

