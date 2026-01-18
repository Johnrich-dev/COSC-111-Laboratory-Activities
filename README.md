# COSC-111-Laboratory-Activities Compilation 🔌📘

## 📌 Overview
This repository contains a compilation of **Arduino laboratory activities** demonstrating progressive concepts in **digital and analog I/O**, **sensor integration**, **serial communication**, **Python interoperability**, and **HTTP-based control using FastAPI**. Each laboratory activity is organized in its own folder with complete source code, documentation, and diagrams.

---

## 📂 Table of Contents

### 🔹 Laboratory 1 – Running Light Using Arduino (Digital Output)
**Concepts:** Digital signals, arrays, `for` loops  
- Sequential LED ON/OFF using `digitalWrite()`
- Introduces Arduino as an IoT device

📁 `Laboratory-1-Running-Light-Digital`

---

### 🔹 Laboratory 2 – Running Light with PWM Brightness Control
**Concepts:** Analog signals, PWM, `analogWrite()`, `while` loops  
- Controls LED brightness using PWM
- Uses arrays for pins and brightness values

📁 `Laboratory-2-Running-Light-PWM`

---

### 🔹 Laboratory 3 – Fire Detection Using Thermistor and Photoresistor
**Concepts:** Sensors, analog input, threshold logic  
- Temperature sensing using a thermistor (Celsius)
- Brightness sensing using an LDR
- LED and speaker alert for fire detection

📁 `Laboratory-3-Fire-Detection`

---

### 🔹 Laboratory 4 – Serial-Controlled Persistent Alert
**Concepts:** Arduino Serial communication  
- Sensor-triggered LED blinking
- Persistent alert controlled via Serial Monitor
- Case-insensitive command handling

📁 `Laboratory-4-Serial-Control`

---

### 🔹 Laboratory 5 – Arduino + Python Serial LED Control
**Concepts:** Python serial communication, command-based control  
- Python menu sends commands to Arduino
- Controls RGB LEDs via serial input
- Modular Arduino code using header files

📁 `Laboratory-5-Arduino-Python-Serial`

---

### 🔹 Laboratory 6 – Bidirectional Control Using Arduino and Python
**Concepts:** Bidirectional serial communication  
- Arduino buttons send signals to Python
- Python responds with commands to toggle LEDs
- Demonstrates real-time two-way interaction

📁 `Laboratory-6-Bidirectional-Control`

---

### 🔹 Laboratory 7 – Controlling Arduino using FastAPI
**Concepts:** HTTP APIs, FastAPI, Serial-over-HTTP  
- REST API endpoints to control Arduino LEDs
- Python FastAPI server bridges HTTP requests to serial commands
- Demonstrates IoT-style remote control architecture

📁 `Laboratory-7-FastAPI-Control`

---

## 🧰 Technologies Used
- Arduino (C / C++)
- Sensors and electronic components
- Python
- PySerial
- FastAPI
- Serial Communication (UART)
- REST APIs (HTTP)

---

## 📝 Notes
- Each laboratory folder contains:
  - Source code (`.ino`, `.py`, `.h`)
  - A dedicated `README.md`
  - Breadboard diagrams (if required)
- COM ports and baud rates may need adjustment depending on the system.

---

## 👤 Author
John Rich  
Arduino Laboratory Exercises 🚀
