# Laboratory 7 – Controlling Arduino using FastAPI 🌐🔌

## 📌 Overview
This activity demonstrates controlling an Arduino LED circuit using **HTTP endpoints** powered by **FastAPI**, with commands sent to Arduino through **Serial (pyserial)**. The API allows toggling individual LEDs via `/led/{color}` and turning all LEDs ON/OFF via `/led/on` and `/led/off`.

## 🎯 Objectives
- Understand and implement Arduino Serial Connection
- Use Python for Serial communication and build an HTTP-based solution using FastAPI
- Control Arduino LEDs through a simple REST API

## 🧰 Components
- Arduino MCU
- 3 LEDs (Red, Green, Blue)
- Resistors, breadboard, jumper wires
- Laptop with Python, `pyserial`, and `fastapi` (plus an ASGI server like `uvicorn`)

## 🔌 Pin Mapping
| LED | Pin |
|-----|-----|
| Red | D7 |
| Green | D6 |
| Blue | D5 |

## 🔁 Serial Commands Supported (Arduino)
Arduino reads serial commands and executes:
- `1` → toggle Red LED
- `2` → toggle Green LED
- `3` → toggle Blue LED
- `ON` → turn all LEDs ON
- `OFF` → turn all LEDs OFF

> Commands are handled as strings and normalized using `trim()` + `toUpperCase()`.

## 🌐 API Endpoints (FastAPI)
### `GET /led/{color}`
- `color` must be: `red`, `green`, `blue`
- Sends to Arduino:
  - `red` → `1`
  - `green` → `2`
  - `blue` → `3`

### `GET /led/on`
- Sends `ON` (turns all LEDs ON)

### `GET /led/off`
- Sends `OFF` (turns all LEDs OFF)

## 📂 Files Included
- `*.ino` – Arduino sketch (reads serial commands and controls LEDs)
- `LedController.h` – LED controller class (toggle + all on/off + serial messages)
- `*.py` – FastAPI application (HTTP → Serial bridge)
- Breadboard diagram (image)

## ▶️ How to Run
### 1) Upload Arduino Code
1. Open the `.ino` file in Arduino IDE.
2. Make sure `LedController.h` is in the same project folder / Arduino tab.
3. Upload to Arduino.

### 2) Run FastAPI Server
1. Install dependencies:
   - `pip install fastapi uvicorn pyserial`
2. Update the COM port in the Python file if needed:
   - `serial.Serial("COM7", 9600, timeout=1)`
3. Start the server:
   - `uvicorn main:app --reload`
   *(replace `main` with your Python filename if different)*

### 3) Test Endpoints
Examples (in browser or using Postman):
- `/led/red`
- `/led/green`
- `/led/blue`
- `/led/on`
- `/led/off`

## 📝 Notes
- The Python script sends commands with a newline (`\n`) to match Arduino reading using `readStringUntil('\n')`.
- Ensure the Arduino IDE Serial Monitor is closed while FastAPI is using the COM port.

## 🧑‍💻 Author
John Rich  
Arduino Laboratory Exercises 🚀

