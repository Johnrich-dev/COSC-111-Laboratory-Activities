# Laboratory 4 – Serial-Controlled Persistent Alert (Photoresistor + Stop Command)

## 📌 Project Overview
This laboratory activity demonstrates **Arduino Serial Communication** combined with **sensor-triggered control logic**. Using a **photoresistor (LDR)** as the input sensor, the system detects when brightness reaches a specified threshold and activates a **persistent (latched) LED blinking alert**. Once the alert is triggered, it **continues blinking even if the brightness drops below the threshold**. The alert can only be stopped by sending the command **"stop"** through the Arduino Serial Monitor (case-insensitive).

This project reinforces fundamental Serial functions such as `Serial.begin()`, `Serial.available()`, and `Serial.readStringUntil()`, while also highlighting basic state-handling using boolean flags.

---

## 🎯 Objectives
- Understand and implement Arduino Serial Connection  
- Utilize and familiarize students with basic Serial communication functions  
- Create a simple circuit that can be controlled using Serial connection  

---

## ⚙️ Project Description
The Arduino reads brightness values from a **photoresistor** connected to an analog pin. When the sensor reading reaches the threshold (**220**), the system enters a **blinking state**. This blinking state is persistent and will continue indefinitely until the user types **stop** in the Serial Monitor.

---

## ✅ Key Requirements Covered
- Uses **one sensor** (Photoresistor)
- Uses **threshold = 220** to trigger behavior
- LED blinks on **pin 8** with **100 ms delay**
- LED blinking **continues even after the reading drops below threshold**
- Typing **"stop"** (any letter case) stops blinking and halts the system

---

## ✨ Features and Functionalities
- Real-time brightness reading using `analogRead()`
- Serial Monitor output for monitoring sensor values
- Persistent blinking alert once threshold is reached
- Command-based control via Serial Monitor:
  - **stop** → turns off LED and halts the system
- Case-insensitive command handling via `toLowerCase()`
- State tracking using boolean flags:
  - `isBlinking` – determines if LED should blink
  - `isActive` – determines if the system should continue running

---

## 🧰 Components Used
- Arduino Uno (or compatible board)
- 1 × Photoresistor (LDR)
- 1 × Resistor (commonly 10kΩ for voltage divider, depending on setup)
- 1 × LED
- 1 × Resistor for LED (220Ω or 330Ω recommended)
- Breadboard
- Jumper wires

---

## 🔌 Pin Configuration
| Component | Arduino Pin |
|----------|-------------|
| Photoresistor (LDR) | A0 |
| LED Alert | D8 |

---

## 📏 Threshold Values
| Parameter | Value |
|----------|-------|
| Brightness Threshold | 220 |
| Blink Delay | 100 ms |

---

## 🔄 System Logic / How It Works
1. **Initialization**
   - Serial connection starts at **9600 bps**
   - Photoresistor pin is set as `INPUT`
   - LED pin is set as `OUTPUT`
   - A guide message is printed: *"System Ready. Type 'stop' to stop the system."*

2. **Serial Command Check**
   - Arduino continuously checks `Serial.available()`
   - Reads input using `Serial.readStringUntil('\n')`
   - Cleans input using `trim()` and converts it to lowercase using `toLowerCase()`
   - If the command equals `"stop"`, the system:
     - stops blinking
     - turns off the LED
     - disables further processing (`isActive = false`)

3. **Sensor Reading**
   - Reads brightness using `analogRead(A0)`
   - Prints the value to Serial Monitor

4. **Persistent Trigger**
   - If brightness >= 220:
     - blinking is activated (`isBlinking = true`)
   - Blinking continues even if brightness later drops below 220

5. **Blinking Output**
   - LED blinks rapidly (ON 100ms, OFF 100ms) while `isBlinking == true`

---

## ▶️ How to Run the Project
1. Assemble the circuit using the pin configuration.
2. Upload the `.ino` file to Arduino using Arduino IDE.
3. Open **Tools → Serial Monitor**
4. Set baud rate to **9600**
5. Shine light on the photoresistor until readings reach **220+**
6. Observe the LED blinking (it should stay blinking even if light is removed)
7. Type `stop` then press **Enter/Send** to stop the blinking permanently.

---

## 🧪 Sample Serial Monitor Output
- `System Ready. Type 'stop' to stop the system.`
- `Brightness: 180`
- `Brightness: 230`
- `Threshold reached!`
- *(LED continues blinking)*
- `Blinking stopped. System halted.`

---

## 📝 Notes / Improvements (Optional)
- You may add a `start` command to reactivate the system without re-uploading the code.
- You may add debounce logic if switching to digital sensors.
- For more stable readings, consider averaging multiple `analogRead()` values.

---

## 🧑‍💻 Author
John Rich  
Arduino Laboratory Exercises
