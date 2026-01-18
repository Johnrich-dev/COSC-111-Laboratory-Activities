# Laboratory 5 – Arduino + Python Serial LED Control

## Overview
This activity demonstrates **Serial Communication** between **Arduino** and **Python (pyserial)**. A Python menu sends commands to Arduino to control three LEDs (Red, Green, Blue). Inputs are **case-insensitive** and mapped to LED actions.

## Objectives
- Implement Arduino Serial Connection
- Use Python as a tool for serial communication (pyserial)
- Control an Arduino circuit using Serial commands from Python

## Components
- Arduino MCU
- 3 LEDs (Red, Green, Blue)
- 3 resistors (220Ω–330Ω recommended)
- Breadboard + jumper wires
- Laptop with Python and `pyserial`

## Pin Mapping
| LED | Arduino Pin |
|-----|------------|
| Red | D8 |
| Green | D9 |
| Blue | D10 |

## Command Mapping (Case-Insensitive)
| Input | Action |
|------|--------|
| R / r | Toggle Red LED |
| G / g | Toggle Green LED |
| B / b | Toggle Blue LED |
| A / a | Turn ALL LEDs ON |
| O / o | Turn ALL LEDs OFF |
| X / x | Turn ALL LEDs OFF, then exit |

## Files Included
- `*.ino` – Arduino sketch that reads Serial input and triggers LED actions
- `LEDControl.h` – Header file containing reusable LED control functions (toggle/on/off)
- `*.py` – Python menu script that sends commands to Arduino via Serial
- Breadboard diagram (image file)

## How It Works
1. Arduino initializes Serial at **9600 baud** and sets LED pins using `initLEDs(8, 9, 10)`.
2. Arduino continuously reads incoming Serial bytes and executes actions based on the character received.
3. Python shows a **non-terminating menu**, reads user input, converts it to lowercase, and sends the command to Arduino.
4. When `x` is entered, Arduino turns all LEDs OFF and the Python program exits.

## How to Run
### 1) Upload Arduino Code
1. Open the `.ino` file in Arduino IDE.
2. Make sure `LEDControl.h` is in the same project folder (or Arduino tab).
3. Select the correct board and COM port.
4. Upload to Arduino.

### 2) Run Python Script
1. Install pyserial:
   - `pip install pyserial`
2. Edit the Python file and set the correct COM port:
   - `COM_PORT = "COM3"` (example)
3. Run:
   - `python your_script_name.py`
4. Use the menu to control LEDs.

## Notes
- The Python script clears the screen after each input to keep the menu clean.
- Ensure the baud rate in Python matches Arduino (**9600**).

## Author
John Rich  
Arduino Laboratory Exercises
