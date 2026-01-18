# Arduino Laboratory Activities Compilation 🔌📘

## 📌 Overview
This repository contains a compilation of **Arduino laboratory activities** demonstrating progressive concepts in **digital and analog I/O**, **sensor integration**, **serial communication**, **Python interoperability**, **bidirectional communication**, and **HTTP-based control using FastAPI**.

Each laboratory activity is organized in its **own folder**, complete with source code, documentation, and required diagrams.

---

## 📂 Table of Contents

### 🔹 Laboratory 1 – Running Light Using Arduino (Digital Output)
**Concepts:** Digital signals, arrays, `for` loops  
- Sequential LED ON/OFF using `digitalWrite()`
- Introduces Arduino as a basic IoT device  

📁 [Lab_Activity-1_BSCS4B](Lab_Activity-1_BSCS4B)

---

### 🔹 Laboratory 2 – Running Light with PWM Brightness Control
**Concepts:** Analog signals, PWM, `analogWrite()`, `while` loops  
- Controls LED brightness using PWM
- Uses arrays for pins and brightness values  

📁 [Lab_Activity-2_BSCS4B](Lab_Activity-2_BSCS4B)

---

### 🔹 Laboratory 3 – Fire Detection Using Thermistor and Photoresistor 🔥
**Concepts:** Sensors, analog input, threshold logic  
- Temperature sensing using a thermistor (Celsius)
- Brightness sensing using an LDR
- LED and speaker alert for fire detection  

📁 [Lab_Activity-3_BSCS4B](Lab_Activity-3_BSCS4B)

---

### 🔹 Laboratory 4 – Serial-Controlled Persistent Alert 💻
**Concepts:** Arduino Serial communication  
- Sensor-triggered LED blinking
- Persistent alert controlled via Serial Monitor
- Case-insensitive command handling  

📁 [Lab_Activity-4_BSCS4B](Lab_Activity-4_BSCS4B)

---

### 🔹 Laboratory 5 – Arduino + Python Serial LED Control 🐍🔌
**Concepts:** Python serial communication, command-based control  
- Python menu sends commands to Arduino
- Controls RGB LEDs via serial input
- Modular Arduino code using header files  

📁 [Lab_Activity-5_BSCS4B](Lab_Activity-5_BSCS4B)

---

### 🔹 Laboratory 6 – Bidirectional Control Using Arduino and Python 🔁
**Concepts:** Bidirectional serial communication  
- Arduino buttons send signals to Python
- Python responds with commands to toggle LEDs
- Demonstrates real-time two-way interaction  

📁 [Lab_Activity-6_BSCS4B](Lab_Activity-6_BSCS4B)

---

### 🔹 Laboratory 7 – Controlling Arduino using FastAPI 🌐
**Concepts:** HTTP APIs, FastAPI, Serial-over-HTTP  
- REST API endpoints to control Arduino LEDs
- Python FastAPI server bridges HTTP requests to serial commands
- Demonstrates IoT-style remote control architecture  

📁 [Lab_Activity-7_BSCS4B](Lab_Activity-7_BSCS4B)

---

## 🧰 Technologies Used
- Arduino (C / C++)
- LEDs, Sensors, Push Buttons
- Python
- PySerial
- FastAPI
- Serial Communication (UART)
- REST APIs (HTTP)

---

## 📝 Notes
- Each laboratory folder includes:
  - Source code (`.ino`, `.py`, `.h`)
  - A dedicated `README.md`
  - Breadboard diagrams (when required)
- COM ports and baud rates may need to be adjusted depending on the system.

---

## 👤 Author
John Rich  
Arduino Laboratory Exercises 🚀
