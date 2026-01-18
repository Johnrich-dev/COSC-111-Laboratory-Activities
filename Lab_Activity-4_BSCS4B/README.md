# Laboratory 4 – Serial-Controlled Alert Blinking (Thermistor or Photoresistor)

## 📌 Project Overview
This laboratory activity introduces **Arduino Serial Communication** and demonstrates how sensor-based behavior can be controlled and overridden through the **Serial Monitor**. Building from the circuit and code base of Laboratory Activity 3, the system uses **one selected sensor** (thermistor or photoresistor) to trigger an LED blinking alert. Once triggered, the LED continues blinking even if the sensor value returns below the threshold, and can only be stopped by typing **"stop"** in the Serial Monitor (case-insensitive).

## 🎯 Objectives
- Understand and implement Arduino Serial Connection
- Utilize and become familiar with basic Serial functions
- Create a simple circuit that can be controlled using Serial communication

## ⚙️ Project Description
The system reads sensor input from either:
- **Thermistor** (temperature) with a threshold of **50°C**, or
- **Photoresistor (LDR)** (brightness) with a threshold of **220**

When the chosen sensor reaches its threshold, the system starts blinking an LED connected to **digital pin 8** with a delay of **100 ms**. The blinking continues **persistently**, even after the sensor reading drops below the threshold. Blinking stops only when the user types **stop** into the Arduino Serial Monitor. The stop command is **case-insensitive** (e.g., `STOP`, `Stop`, `stOp` all work).

## ✨ Features and Functionalities
- Sensor-based trigger using **one** selected sensor (thermistor or photoresistor)
- Persistent LED blinking on pin 8 once threshold is reached
- Serial Monitor command control:
  - Typing **"stop"** stops the blinking
  - Command is case-insensitive
- Demonstrates core Serial functions such as:
  - `Serial.begin()`
  - `Serial.available()`
  - `Serial.readString()` / `Serial.read()` (depending on implementation)
  - `Serial.print()` / `Serial.println()`

## 🧰 Components Used
- Arduino Uno (or compatible Arduino board)
- **Choose one sensor:**
  - Thermistor (with resistor for voltage divider), OR
  - Photoresistor / LDR (with resistor for voltage divider)
- 1 × LED
- 1 × Resistor for LED (220Ω or 330Ω recommended)
- Breadboard
- Jumper wires

## 🔌 Pin Configuration (based on selected sensor)
### If using Thermistor
| Component | Arduino Pin |
|----------|-------------|
| Thermistor (Analog Input) | A0 |
| LED Alert | D8 |

### If using Photoresistor (LDR)
| Component | Arduino Pin |
|----------|-------------|
| Photoresistor (Analog Input) | A2 |
| LED Alert | D8 |

## 📏 Threshold Values
- Thermistor threshold: **50°C**
- Photoresistor threshold: **220**

> Use `const` variables to store threshold values.

## 🔄 System Logic / How It Works
1. Arduino initializes Serial communication using `Serial.begin()`.
2. Arduino continuously reads from the selected sensor.
3. If the sensor reading meets or exceeds the threshold:
   - A blinking state is activated (latched ON).
4. While blinking is active:
   - LED on pin 8 blinks continuously with `delay(100)`.
5. The Serial Monitor listens for user input:
   - If the user types **"stop"** (any letter case), blinking stops and the system returns to monitoring mode.

## 💻 Software Requirements
- Arduino IDE
- Serial Monitor (built into Arduino IDE)

## ▶️ How to Run the Project
1. Build the circuit using the chosen sensor setup.
2. Upload the code to Arduino.
3. Open **Tools → Serial Monitor**.
4. Trigger the threshold condition (heat the thermistor or shine light on LDR).
5. Confirm LED starts blinking and continues even after threshold is removed.
6. Type **stop** in the Serial Monitor and press Enter/Send to stop the blinking.

## ✅ Expected Output / Behavior
- LED stays OFF initially
- LED begins blinking when threshold is met
- LED continues blinking even if readings drop below threshold
- Typing `stop` in Serial Monitor stops blinking immediately

## 🧑‍💻 Author
John Rich  
Arduino Laboratory Exercises

