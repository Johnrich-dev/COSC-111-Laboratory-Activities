# Final Laboratory Exam – Remote Arduino Control via API 🌐🔌

## 📌 Overview
This project demonstrates **remote control of an Arduino device using an HTTP-based API**.  
A **local Arduino setup with a push button** sends a signal to a **Python application**, which then **calls an API hosted by the instructor**. The API controls the **instructor’s Arduino**, causing an LED to toggle remotely.

This implementation simulates a real-world **IoT architecture**, where a physical device interacts with another remote device through **software and network communication**.

---

## 🎯 Objectives
- Implement Arduino Serial Communication
- Integrate hardware input with Python
- Perform HTTP API calls to control a remote Arduino device
- Demonstrate hardware → software → network → hardware interaction

---

## 🧰 Components Used

### Local Setup (Student Side)
- Arduino MCU
- 1 Push Button
- Resistor
- Breadboard and jumper wires
- Laptop with Python

### Remote Setup (Instructor Side)
- Arduino MCU
- LED
- FastAPI-based control server  
*(Instructor-owned; not included in this repository)*

---

## 🔌 Local Pin Configuration
| Component | Arduino Pin |
|---------|-------------|
| Push Button | D2 |

---

## 🔧 Circuit Diagram Note (Important)
The uploaded **Tinkercad circuit diagram (PNG)** represents **only the local button setup used to trigger the API call**.

- The diagram shows the **student’s Arduino (remote controller)** with a push button.
- Pressing the button sends a signal to the Python application via **Serial Communication**.
- The Python application then **calls the instructor’s API**, which controls the **instructor’s Arduino and LED**.

⚠️ **The instructor’s Arduino circuit is NOT included** in this repository, as it is hosted externally and was not accessible to the student.

Therefore, all files and diagrams in this repository represent **only the remote client side of the system**, not the complete end-to-end hardware setup.

---

## 🔄 System Architecture
1. **Button Press (Local Arduino)**  
   - Button press is detected using edge detection.
   - Arduino sends `"1"` via Serial.

2. **Python Listener (Local Laptop)**  
   - Python reads `"1"` from Serial.
   - Python calls the instructor’s API endpoint:
     ```
     /led/group/1/toggle
     ```

3. **Instructor API (Remote System)**  
   - API receives the request.
   - API toggles the LED on the instructor’s Arduino.

---

## 📂 Files Included
- `*.ino` – Arduino sketch for button input and Serial output
- `*.py` – Python application that listens to Serial and calls the instructor’s API
- `*.png` – Tinkercad diagram of the **local button setup only**
- `README.md` – Project documentation

---

## ▶️ How to Run

### 1️⃣ Arduino (Local)
1. Open the `.ino` file in Arduino IDE.
2. Connect the push button according to the pin configuration.
3. Upload the code to the Arduino board.

### 2️⃣ Python (Local)
1. Install dependencies:

