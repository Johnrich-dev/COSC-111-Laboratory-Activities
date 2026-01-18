# Laboratory 3 – Working with Sensors (Fire Sensor Simulation)

## 📌 Project Overview
This laboratory activity introduces basic sensor integration for IoT and embedded systems using Arduino. The project implements a **simple fire detection prototype** by combining a **thermistor** (temperature sensing) and a **photoresistor (LDR)** (light intensity sensing). When both sensor readings exceed defined threshold limits, the system triggers a **fast-blinking red LED alert** (and optionally a buzzer) to indicate a possible fire condition.

## 🎯 Objectives
- Familiarize students with basic sensor components commonly used in IoT
- Integrate sensor components into an Arduino circuit
- Create a simple implementation of a fire sensor using multiple sensor inputs

## ⚙️ Project Description
The system reads:
- **Temperature** from a thermistor connected to **A0**, converted into **Celsius**
- **Brightness** from a photoresistor connected to **A2**, interpreted using a **digital signal approach** (based on a threshold value)

A fire alert is triggered only when:
- Temperature is **≥ 50°C**, **AND**
- Brightness reading is **≥ 220**

When both thresholds are met, a **red LED on pin 12** blinks rapidly to notify the user. *(Nice to have: a buzzer/speaker is triggered together with the LED using the same pin.)*

## ✨ Features and Functionalities
- Reads temperature (Celsius) from a thermistor on A0
- Reads brightness from a photoresistor (LDR) on A2
- Uses **dual-condition detection** (temperature AND brightness thresholds)
- Fast blinking red LED alert on digital pin 12 when fire condition is detected
- Code structure requirement:
  - Separate sensor readings into two functions:
    - `readTemperatureC()`
    - `readBrightness()`
  - Uses `#define` for pin mappings
  - Uses `const` for threshold values

## 🧰 Components Used
- Arduino Uno (or compatible Arduino board)
- Thermistor (with appropriate resistor for voltage divider)
- Photoresistor / LDR (with appropriate resistor for voltage divider)
- 1 × Red LED
- 1 × Resistor for LED (220Ω or 330Ω recommended)
- (Optional) Buzzer / Speaker
- Breadboard
- Jumper wires

## 🔌 Pin Configuration
| Component | Arduino Pin |
|----------|-------------|
| Thermistor (Analog Input) | A0 |
| Photoresistor / LDR (Analog Input) | A2 |
| Red LED Alert | D12 |
| (Optional) Buzzer / Speaker | D12 *(same pin as LED)* |

## 📏 Threshold Values
- Temperature threshold: **50°C**
- Brightness threshold: **220**

> Threshold values must be stored using `const`.

## 🔄 System Logic / How It Works
1. Arduino reads thermistor voltage at **A0** and converts it to **temperature in Celsius**.
2. Arduino reads the photoresistor value at **A2** and compares it against the brightness threshold.
3. The system checks the condition:

   **IF (Temperature ≥ 50°C) AND (Brightness ≥ 220)**  
   → Trigger alert output (fast blinking red LED, optional buzzer)

4. If conditions are not met, the alert remains OFF.

## 💻 Software Requirements
- Arduino IDE
- Required libraries: None (unless a specific thermistor library is used in your implementation)

## ✅ Passing Criteria Checklist
- [ ] Working circuit and Arduino code
- [ ] Temperature and brightness readings are implemented in separate functions
- [ ] Pin numbers are declared using `#define`
- [ ] Threshold values are declared using `const`
- [ ] LED alert on pin 12 blinks fast when thresholds are met
- [ ] (Optional) Buzzer uses the same pin as the LED

## ▶️ How to Run the Project
1. Build the circuit using the pin configuration table.
2. Open the `.ino` file in Arduino IDE.
3. Upload the code to the Arduino board.
4. Monitor sensor readings via Serial Monitor (if included).
5. Test by increasing heat and light intensity to meet thresholds and observe the alert.

## 🧑‍💻 Author
John Rich  
Arduino Laboratory Exercises

