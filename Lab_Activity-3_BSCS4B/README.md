# Laboratory 3 – Fire Detection Using Thermistor and Photoresistor

## 📌 Overview
This laboratory activity demonstrates a simple **fire detection system** using Arduino. A **thermistor** measures temperature in Celsius, while a **photoresistor (LDR)** measures brightness. When both sensor thresholds are met, an LED and a speaker are activated as an alert.

## 🎯 Objectives
- Integrate basic sensors used in IoT systems
- Implement a simple fire sensor using Arduino

## ⚙️ How It Works
- Thermistor reads temperature from **A0**
- Photoresistor reads brightness from **A2**
- Fire alert triggers when:
  - Temperature ≥ **50°C**
  - Brightness ≤ **220**
- LED and speaker activate to signal fire detection

## ✨ Features
- Temperature conversion using thermistor
- Brightness detection using LDR
- Separate functions for sensor readings
- Uses `#define` for pin mapping
- Uses `const` for threshold values
- Serial Monitor displays sensor readings

## 🔌 Pin Configuration
| Component | Pin |
|---------|-----|
| Thermistor | A0 |
| Photoresistor | A2 |
| LED | D12 |
| Speaker | D11 |

## ▶️ How to Run
1. Build the circuit using the pin configuration.
2. Upload the code to Arduino.
3. Open Serial Monitor at **9600 baud**.
4. Simulate heat and low light to trigger the alert.

## 🧑‍💻 Author
John Rich  
Arduino Laboratory Exercises
