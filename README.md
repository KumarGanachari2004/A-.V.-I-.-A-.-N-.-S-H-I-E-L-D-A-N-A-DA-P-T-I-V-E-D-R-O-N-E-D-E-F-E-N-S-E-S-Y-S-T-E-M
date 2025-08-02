# A.V.I.A.N.SHIELD  AND ADAPTIVE DRONE DEFENSE SYSTEM
A virtual prototype of an adaptive, multi-layered defense system for drones. Designed to deter bird attacks using simulated deterrents.
# A.V.I.A.N. Shield - Adaptive Drone Defense System

### A Virtual Prototype by [Kumareshwar] | August 2025

This repository contains the complete design files for the A.V.I.A.N. Shield, an intelligent, multi-layered defense system designed to protect medical delivery drones from bird of prey attacks. The project was developed as a solution for a challenge requiring a low-cost (< ₹50,000) and lightweight (< 1.5 kg) system.

---

## Project Overview

The A.V.I.A.N. Shield is not just a simple alarm; it's an intelligent system designed on the principle of **Adaptive, Multi-Layered Deterrence**. Instead of a constant, power-draining deterrent, the system uses a "Digital Twin" or **Virtual Prototype** to validate its logic. This simulation-first approach is a standard industry practice to ensure design integrity before committing to physical hardware.

The core of the project is the **Threat Score Algorithm**, which assesses the environment in real-time to make intelligent decisions, ensuring a proportional response that is both effective and energy-efficient.

### Key Features:
* **Intelligent Threat Assessment:** Uses a `threatScore` to evaluate threats based on simulated size and clarity, not just a simple trigger.
* **Tiered Defense Protocol:** Deploys three levels of defense (Warning, Intimidation, Disruption) for a proportional response.
* **Simulation-First Design:** The entire system logic is validated through a high-fidelity virtual prototype in the Wokwi simulator.
* **Production-Ready Physical Design:** Includes a 3D model for the aerodynamic "Sting Pod" enclosure, ready for manufacturing.

---

## How It Works: The Simulation

This project is demonstrated through a virtual prototype where:
1.  **Threats are Simulated:** Three pushbuttons represent different threat levels, allowing for a controlled demonstration of the system's logic.
2.  **Deterrents are Visualized:** LEDs (Green for lasers, White for strobe) and a Buzzer (for the alarm) act as the virtual deterrents.
3.  **The "Brain" is Monitored:** The Serial Monitor acts as a "Mission Control" dashboard, showing the system's real-time status and decision-making process.

---

## Repository Contents

* `AVIAN_Shield_Simulation_Code.ino`: The complete Arduino C++ code for the Wokwi virtual prototype. This file contains the core logic for the Threat Score Algorithm and the tiered defense protocol.
* `Sting_Pod_3D_Model.stl`: The 3D model file for the physical "Sting Pod" enclosure, designed in Tinkercad. This pod is designed to be aerodynamic and house all electronic components.
* `Bill_of_Materials.pdf`: A detailed list of the electronic components required for building the physical prototype, including estimated costs and suppliers.

---

## Future Roadmap

The current virtual prototype serves as a successful proof-of-concept. The next steps to evolve this project into a production-ready system include:
1.  **Hardware Implementation:** Assembling the physical prototype using the components listed in the Bill of Materials.
2.  **AI Model Integration:** Upgrading the detection logic to a true lightweight AI model (e.g., MobileNetV2) for species-specific recognition.
3.  **High-Fidelity Audio:** Integrating a Micro-SD card module to play authentic bird distress calls.
4.  **Custom PCB Manufacturing:** Designing and fabricating a custom PCB to create a compact and rugged final product.

---
*This project was created as part of an internship submission.*
