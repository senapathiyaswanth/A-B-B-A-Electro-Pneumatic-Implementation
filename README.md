# 🤖 A+B+B−A Electro-Pneumatic Implementation using Arduino

### 🎓 Semester 3 Project – Mechatronics  
**Course:** Fluid Power Systems and Automation  
**Team:** 6 Members   

---

## 💡 Project Overview

This project, titled **“A+B+B−A Electro-Pneumatic Implementation”**, demonstrates an **automatic pneumatic sequence control system** using **Arduino**, an **IR sensor**, and **220V AC solenoid valves** operated through **two 2-channel relay modules**.

Developed as part of our *Semester 3 – Fluid Power Systems and Automation* course, this system brings together **pneumatics, electronics, and automation** to perform the sequence:

> **A → B → B̄ → Ā**  
(*Cylinder A extends → Cylinder B extends → Cylinder B retracts → Cylinder A retracts*)

The sequence begins only when the **IR sensor detects an object** (like a hand) and **stops instantly** when the object is removed, ensuring both **safety and control** — just like industrial automation systems.

---

## ⚙️ Working Principle

1. The **IR sensor** detects an object and signals the Arduino.  
2. The Arduino activates relays in sequence, which control the **220V AC solenoid valves**.  
3. The solenoid valves direct compressed air to the pneumatic cylinders, creating the **A+B+B−A motion**.  
4. When the object is removed, the relays turn OFF immediately, stopping all cylinder actions safely.  

This results in a **semi-automatic, sensor-controlled pneumatic system** designed with industrial precision.

---

## 🔩 Components Used

| Component | Quantity | Description |
|------------|-----------|-------------|
| Arduino Uno | 1 | Main microcontroller (5V logic) |
| IR Sensor Module | 1 | Detects object or hand presence |
| 2-Channel Relay Module | 2 | Controls 220V AC solenoid valves |
| Double Acting Pneumatic Cylinders | 2 | Cylinders A and B |
| 5/2 Solenoid Valves (220V AC) | 2 | Directional control valves |
| Air Compressor | 1 | Supplies compressed air |
| External 5V DC Power Supply | 1 | For Arduino and relay control |
| 220V AC Power Supply | 1 | For solenoid valves |
| Pneumatic Tubes & Wiring | — | For air and electrical connections |

---

## ⚠️ Safety Note

> ⚡ **Caution:**  
> The solenoid valves operate at **220V AC**, while Arduino works at **5V DC**.  
> Use **optocoupler-based relay modules** or **SSR relays** for electrical isolation.  
> Always double-check all wiring connections and ensure **no exposed live terminals** during operation.  
> This project is intended for **educational demonstration only** — handle AC components safely.

---

## 🔌 Circuit Connections

| Arduino Pin | Connection | Description |
|--------------|-------------|-------------|
| D2 | IR Sensor OUT | Object detection signal |
| D8 | Relay 1 (IN1) | Solenoid A – Extend |
| D9 | Relay 1 (IN2) | Solenoid A – Retract |
| D10 | Relay 2 (IN1) | Solenoid B – Extend |
| D11 | Relay 2 (IN2) | Solenoid B – Retract |
| 5V | Relay & IR VCC | Power supply for control circuits |
| GND | Common Ground | Shared across Arduino, relay, and sensor |

**Relay Output Side (High Voltage):**
- **COM (Common):** Connected to 220V AC Live Line  
- **NO (Normally Open):** Connected to solenoid valve input terminal  
- **Neutral:** Common neutral line shared by both solenoid valves  

🧠 **Logic:**  
- IR detects object → Arduino sends LOW → Relay ON → Solenoid energizes → Cylinder moves  
- IR loses object → Arduino sends HIGH → Relay OFF → Solenoid de-energizes → Cylinder stops

---

## 🧰 Arduino Code Reference

The complete Arduino source code for this project is available in files session

This file contains:
- IR sensor-based automation logic  
- Relay control sequence for A+B+B−A motion  
- Safety stop conditions for loss of IR detection  
- Optimized timing for pneumatic actuation  

---

## 🖼️ Media Gallery

| Fabrication | Circuit Setup | Simulation |
|--------------|----------------|-------------|
| ![Fabrication](FPS%20P1.HEIC) | ![Circuit Setup](FPS%20Circuit.jpg) | ![Simulation](FPS%20P2.HEIC) |

🎥 [Watch the Working Demo](FPS%20Project%20video.mp4)

---

## 🧠 Learning Outcomes

- Learned to interface **Arduino with 220V AC pneumatic systems**  
- Understood **relay isolation and safety design**  
- Designed a **sensor-triggered control system** with precise sequencing  
- Improved hands-on skills in **circuit connection, simulation, and fabrication**  

---

## 📁 Repository Structure

📁 A+B+B−A_Electro_Pneumatic_Implementation/

├── CODE.ino

├── FPS Circuit.jpg

├── FPS P1.HEIC

├── FPS P2.HEIC

├── FPS P3.HEIC

├── FPS Project video.mp4

└── README.md

---

## 🏁 Conclusion

The **“A+B+B−A Electro-Pneumatic Implementation”** project integrates **Arduino control**, **IR sensor automation**, and **220V AC pneumatic actuation** into a single functional system.  
Using two 2-channel relays and a smart IR-based control mechanism, this project perfectly represents the **core of Mechatronics** — where **mechanical, electrical, and software systems** work together seamlessly.

---

📌 *Feel free to explore, fork, and enhance this project!* 

