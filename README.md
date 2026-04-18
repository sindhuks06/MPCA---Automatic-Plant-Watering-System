# 🌱 Automatic Plant Watering System

## 📌 Overview
This project is an Arduino-based automation system designed to monitor soil moisture and automatically water plants when needed.

It uses a soil moisture sensor to detect dryness and controls a water pump through a relay module. The system ensures efficient water usage and reduces manual effort in plant care.

---

## 🎯 Key Features
🌱 Automatic watering based on soil moisture  
💧 Water pump control using relay module  
📊 Real-time monitoring via Serial Monitor  
⚡ Low-cost and energy-efficient system  
🔄 Continuous monitoring and control  

---

## 🧰 Components Used
Arduino Uno  
Soil Moisture Sensor (YL-69)  
Relay Module (5V)  
Mini DC Water Pump  
Battery Holder + Batteries  
Breadboard  
Jumper Wires  
Connecting Tube/Pipe  
USB Cable  

---

## 🔌 Pin Configuration

| Component              | Arduino Pin |
|----------------------|------------|
| Soil Moisture Sensor | A0         |
| Water Detection      | A1         |
| Light Sensor         | A2         |
| Relay Module         | D7         |

---

## 🧠 System Architecture

Sensors (Soil + Water + Light) → Arduino (Processing) → Relay → Water Pump

---

## 🔌 Circuit Diagram

All components are connected to the Arduino using analog and digital pins.  
The soil sensor sends moisture data, and the relay controls the water pump accordingly.

---

## ⚙️ Working Principle

### 🌱 Soil Moisture Detection
- Sensor reads soil moisture level
- If value exceeds threshold → soil is considered dry  

### 💧 Water Pump Control
- If soil is dry → relay turns ON pump  
- If soil is wet → relay turns OFF pump  

### 🔄 Continuous Monitoring
- System continuously reads sensor values  
- Adjusts watering automatically  

---

## 📊 Core Logic (Code)

bool isDry = (soil > soilThreshold);
if (isDry) {
    digitalWrite(relayPin, LOW);  // Pump ON
} else {
    digitalWrite(relayPin, HIGH); // Pump OFF
}

👨‍💻 Team Members

Dhanush R
Sindhu K S
Greeshma G

⭐ Conclusion

This project demonstrates how embedded systems can automate plant care efficiently using simple sensors and control logic. It helps conserve water and ensures plants receive the right amount of hydration without manual intervention.
