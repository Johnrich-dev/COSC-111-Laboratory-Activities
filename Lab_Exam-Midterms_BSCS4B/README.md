# Midterm Laboratory Exam – Light Intensity Monitoring System 🌤️💡

## 📌 Overview
This project implements a **light intensity monitoring system** using Arduino. A **photoresistor** measures ambient light levels, which are then translated into a percentage-based brightness value. Based on configurable thresholds, the system activates one of three LEDs (Green, Yellow, or Red) to indicate the current lighting condition.

The system supports both **MANUAL** and **AUTOMATIC** operating modes, which can be controlled through **Serial commands**.

---

## 🎯 Objectives
- Apply analog sensor reading using Arduino
- Implement conditional logic based on sensor thresholds
- Utilize Serial communication for system configuration
- Demonstrate manual and automatic control modes

---

## 🧰 Components Used
- Arduino Uno (or compatible board)
- Photoresistor (LDR)
- 3 LEDs (Green, Yellow, Red)
- 3 Current-limiting resistors
- Breadboard
- Jumper wires

---

## 🔌 Pin Configuration
| Component | Arduino Pin |
|---------|-------------|
| Photoresistor | A0 |
| Green LED | D11 |
| Yellow LED | D12 |
| Red LED | D13 |

---

## ⚙️ System Modes

### 🔹 MANUAL Mode (Default)
- Thresholds can be adjusted using Serial commands.
- User manually defines the light level ranges for LED activation.

### 🔹 AUTOMATIC Mode
- Thresholds are reset to default values:
  - Green threshold: **40%**
  - Red threshold: **70%**
- LED behavior is fully automatic based on ambient light.

---

## 🖥️ Serial Commands
| Command | Description |
|-------|-------------|
| `MODE MANUAL` | Switches to manual mode |
| `MODE AUTO` | Switches to automatic mode and resets thresholds |
| `SET LOW <value>` | Updates the Green LED threshold (0–100) |
| `SET HIGH <value>` | Updates the Red LED threshold (0–100) |

⚠️ Invalid commands will return an error message.

---

## 🔄 Program Logic
1. Read light value from the photoresistor.
2. Convert sensor reading to a percentage (0–100%).
3. Compare brightness against thresholds:
   - Green → Low light
   - Yellow → Medium light
   - Red → High light
4. Display system status via Serial Monitor.
5. Process Serial commands to update mode or thresholds.

---

## 🧪 Serial Monitor Output
The system displays:
- Current light intensity (%)
- Active LED
- Current operating mode
- Environmental description (Automatic mode only)

Example:
Light Intensity: 65% | Active LED: YELLOW | Mode: AUTOMATIC | Environment: Normal

## ▶️ How to Run
1. Assemble the circuit using the pin configuration.
2. Upload the Arduino sketch.
3. Open the Serial Monitor at **9600 baud**.
4. Observe LED behavior as lighting conditions change.
5. Enter Serial commands to switch modes or adjust thresholds.

---

## 📘 Learning Outcome
This midterm activity demonstrates the ability to:
- Read and interpret analog sensor data
- Apply threshold-based decision making
- Implement system modes and state control
- Use Serial communication for dynamic configuration

---

## 👤 Author
John Rich
COSC 111 – Midterm Laboratory Exam 🚀
