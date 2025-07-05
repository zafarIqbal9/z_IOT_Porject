# z_IOT_Porject
# 💧 Dam Water Level Alert System

## 📌 Project Aim
To design a compact microcontroller-based alert system for monitoring water levels in a dam and triggering alerts when critical levels are reached.

## 🛠️ Components Used
- Arduino UNO  
- HC-SR04 Ultrasonic Sensor  
- 16x2 I2C LCD  
- Buzzer  
- Red LED & Green LED  
- Jumper wires, Breadboard  

## 💡 Working
- The ultrasonic sensor is placed above water level and measures the distance to the water surface.  
- If the water rises (i.e. distance < 30 cm), it means the level is dangerous.  
- Buzzer and red LED turn ON to signal danger.  
- If the level is safe, green LED remains ON.  
- The LCD displays the water level in real-time.

## 📂 Folder Structure
- /code → Arduino .ino file
- /pcb → Gerber files for PCB fabrication
- /tinkerCAD → Circuit design and screenshot
- /report → Detailed project report in PDF
- /video → Demo video (recorded or simulated)

