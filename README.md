#  A+B+B−A Electro-Pneumatic Implementation using Arduino

### 🎓 Semester 3 Project – Mechatronics  
**Course:** Fluid Power Systems and Automation  
**Team:** 6 Members  

---

## 💡 Project Overview

This project, titled **“A+B+B−A Electro-Pneumatic Implementation”**, demonstrates an **automatic pneumatic sequence control system** using **Arduino**, an **IR sensor**, and **220V AC solenoid valves** operated through **two 2-channel relay modules**.

Developed as part of our *Semester 3 – Fluid Power Systems and Automation* course, this system combines **pneumatics, electronics, and automation** to perform the sequence:

> **A → B → B̄ → Ā**  
(*Cylinder A extends → Cylinder B extends → Cylinder B retracts → Cylinder A retracts*)

The sequence begins only when the **IR sensor detects an object** (like a hand) and **stops instantly** when the object is removed, ensuring both **safety and precision** — just like in industrial automation systems.

---

## ⚙️ Working Principle

1. The **IR sensor** detects an object and sends a signal to the Arduino.  
2. The Arduino activates the relays in sequence, controlling the **220V AC solenoid valves**.  
3. The solenoid valves direct compressed air to the pneumatic cylinders, generating the motion **A+B+B−A**.  
4. When the object is removed from the IR sensor’s range, the relays deactivate, stopping all motion immediately.  

This creates a **semi-automatic, sensor-controlled pneumatic system** with industrial-grade sequencing and safety.

---

## 🔩 Components Used

| Component | Quantity | Description |
|------------|-----------|-------------|
| Arduino Uno | 1 | Main microcontroller (5V logic) |
| IR Sensor Module | 1 | Object/hand detection |
| 2-Channel Relay Module | 2 | Controls 220V AC solenoid valves |
| Double Acting Pneumatic Cylinders | 2 | Cylinders A and B |
| 5/2 Solenoid Valves (220V AC) | 2 | Directional control valves |
| Air Compressor | 1 | Air supply source |
| External 5V DC Power Supply | 1 | For Arduino and relay logic |
| 220V AC Power Supply | 1 | For solenoid valves |
| Pneumatic Tubes & Wiring | — | Air and electrical connections |

---

## ⚠️ Safety Note

> ⚡ **Caution:**  
> The solenoid valves operate at **220V AC**, while Arduino and relays work at **5V DC**.  
> Use **optocoupler-based relays** or **SSR relays** for safe electrical isolation.  
> Always check wiring twice before powering ON and ensure there are **no exposed AC terminals**.  
> This setup is for **educational use only** and should be handled with strict safety measures.

---

## 🔌 Circuit Connections

| Arduino Pin | Connection | Description |
|--------------|-------------|-------------|
| D2 | IR Sensor OUT | Object detection signal |
| D8 | Relay 1 (IN1) | Solenoid A – Extend |
| D9 | Relay 1 (IN2) | Solenoid A – Retract |
| D10 | Relay 2 (IN1) | Solenoid B – Extend |
| D11 | Relay 2 (IN2) | Solenoid B – Retract |
| 5V | Relay & IR VCC | Power supply for control logic |
| GND | Common Ground | Shared across all modules |

**Relay Output (High Voltage Side):**  
- **COM (Common):** Connected to 220V AC Live line  
- **NO (Normally Open):** Connected to solenoid valve coil terminal  
- **Neutral:** Common neutral shared by both solenoids  

🧠 **Logic Flow:**  
- IR detects object → Arduino sends LOW → Relay ON → Solenoid energizes → Cylinder moves  
- IR loses object → Arduino sends HIGH → Relay OFF → Solenoid de-energizes → Cylinder stops immediately

---

## 🧰 Arduino Code Reference

The full Arduino code for this project is available in the repository under:  
📄 [`CODE.ino`](CODE.ino)

This file includes:
- IR sensor-based sequence triggering  
- Relay control logic for **A+B+B−A** sequence  
- Safety stop mechanism when IR input is lost  
- Optimized timing delays for smooth pneumatic motion  

---

## 🖼️ Media Gallery

### 📜 Circuit Diagram
![Circuit Diagram](FPS%20Circuit.jpg)

### ⚙️ Fabrication & Real Setup
| Fabrication | Working Setup | Close View | Top View |
|--------------|----------------|-------------|-------------|
| ![Fabrication](FPS%20P1.1.jpg) | ![Setup](FPS%20P2.2.jpg) | ![Close View](FPS%20P3.3.jpg) | ![Top View](FPS%20P3.3.jpg) |

🎥 [Watch the Working Demo](FPS%20Project%20video.mp4)

---

## 🧠 Learning Outcomes

- Gained knowledge in **electro-pneumatic control using Arduino**  
- Learned to integrate **IR sensors** for start/stop safety automation  
- Understood **relay interfacing and isolation for 220V AC systems**  
- Strengthened practical skills in **fabrication, simulation, and testing**  

---

## 📁 Repository Structure

📁 A+B+B−A_Electro_Pneumatic_Implementation/

├── CODE.ino

├── FPS Circuit.jpg

├── FPS P1.1.jpg

├── FPS P2.2.jpg

├── FPS P3.3.jpg

├── FPS Project video.mp4

└── README.md

---

## 🏁 Conclusion

The **“A+B+B−A Electro-Pneumatic Implementation”** project combines **Arduino control**, **sensor-based automation**, and **220V pneumatic actuation** into one integrated system.  
By using **two 2-channel relays** and an **IR-controlled start/stop mechanism**, this project reflects the **core principles of Mechatronics** — uniting **mechanical motion, electronic control, and programming logic** to achieve precise automation.

---

📌 *Feel free to explore, fork, and enhance this project!*  
