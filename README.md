# Traffic Light Simulation with Arduino  
## Overview  
This project simulates a basic traffic light system using an **Arduino Uno**, **LEDs**, and a **push button** for pedestrian crossings. It also includes an advanced version with an **ultrasonic sensor** for smart traffic control.  
## Part 1: Basic Traffic Light with Pedestrian Crossing  
### Components Required  
- Arduino Uno  
- Red, Yellow, and Green LEDs  
- 3 × 220Ω resistors  
- Push button  
- 10kΩ resistor  
- Breadboard & wires  
### Working  
1. The traffic lights follow a standard cycle: **Green → Yellow → Red → Green**.  
2. When the **push button** is pressed, the system **immediately turns Red** to allow pedestrian crossing.  
3. After a short delay, the normal cycle resumes.  
---
## Part 2: Smart Traffic Light with Ultrasonic Sensor  
### Additional Components  
- Ultrasonic Sensor **HC-SR04**  
### Working  
1. The system continuously monitors traffic using the **ultrasonic sensor**.  
2. If a vehicle is **detected (distance < threshold)**, the traffic light follows its **normal cycle**.  
3. If **no vehicle** is detected for **30 seconds**, the light stays **Red** to save power.  
4. If a pedestrian **presses the button**, the light turns **Red**, allowing safe crossing.  
## Applications  
- **Basic Traffic Management**  
- **Smart Traffic Control for Energy Efficiency**  
- **Pedestrian Safety System**  
This project helps us understand Arduino programming, sensors, and real-world traffic light automation.
