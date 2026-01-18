# Laboratory 6 – Bidirectional Control Using Arduino and Python 🔁

## 📌 Overview
This activity demonstrates **two-way (bidirectional) Serial Communication** between **Arduino** and **Python (pyserial)**.  
- **Outbound (Arduino → Python):** Button presses send `R`, `G`, or `B` once.
- **Inbound (Python → Arduino):** Python responds by sending `1`, `2`, or `3` to toggle the corresponding LED.

## 🎯 Objectives
- Understand and implement Arduino Serial Connection
- Utilize Python for serial communication
- Build a simple bidirectional control system using Arduino + Python

## 🧰 Components
- Arduino MCU
- 3 LEDs (Red, Green, Blue)
- 3 Push buttons
- Resistors, breadboard, jumper wires
- Laptop with Python + `pyserial`

## 🔌 Pin Mapping
### LEDs
| LED | Pin |
|-----|-----|
| Red | D7 |
| Green | D6 |
| Blue | D5 |

### Buttons (INPUT_PULLUP)
| Button | Pin | Sends |
|--------|-----|-------|
| Button 1 | D12 | `R` |
| Button 2 | D11 | `G` |
| Button 3 | D10 | `B` |

## 🔁 Communication Flow
### Outbound (Arduino → Python)
- Press Button 1 → Arduino prints `R` **once**
- Press Button 2 → Arduino prints `G` **once**
- Press Button 3 → Arduino prints `B` **once**
- Button presses **do not** directly control LEDs.

### Inbound (Python → Arduino)
- Python listens for `R/G/B`
- When received:
  - `R` → Python sends `1` → Arduino toggles Red LED
  - `G` → Python sends `2` → Arduino toggles Green LED
  - `B` → Python sends `3` → Arduino toggles Blue LED

✅ Response is designed to be **< 1 second** (Python loop reads frequently and writes back immediately).

## 📂 Files Included
- `*.ino` – Arduino sketch (handles buttons outbound + serial inbound)
- `LEDControl.h` – LED + button helper functions (init, toggle, edge-detect prints)
- `*.py` – Python script (reads `R/G/B`, sends back `1/2/3`)
- Breadboard diagram (image)

## ▶️ How to Run
### 1) Arduino
1. Open the `.ino` file in Arduino IDE.
2. Ensure `LEDControl.h` is in the same project folder / Arduino tab.
3. Upload to Arduino.

### 2) Python
1. Install pyserial:
   - `pip install pyserial`
2. Update the COM port in the script:
   - `COM_PORT = "COM7"` (example)
3. Run:
   - `python your_script_name.py`
4. Press the buttons and observe LEDs toggle.

## 🧑‍💻 Author
John Rich  
Arduino Laboratory Exercises 🚀

