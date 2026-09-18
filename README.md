# 💧 Water Quality Indicator

## 📌 Abstract

The Water Quality Indicator is an Arduino-based prototype developed to monitor the turbidity of water. A turbidity sensor is used to obtain an analog reading related to the clarity of the water. The reading is processed by an Arduino UNO and displayed on a 16×2 I2C LCD. A buzzer provides an alert when the sensor reading crosses the selected threshold.

## 🎯 Objective

- To monitor the turbidity of water using a turbidity sensor.
- To display the sensor reading on an LCD.
- To provide a simple indication based on the measured turbidity.
- To alert the user when the sensor reading exceeds the selected threshold.

## 🔧 Components Used

- Arduino UNO R3
- Turbidity Sensor
- 16×2 I2C LCD
- 5V Buzzer
- Jumper Wires
- USB Cable

## ⚙️ Method & Workflow

1. The turbidity sensor is placed in the water sample.
2. The sensor generates an analog signal based on the turbidity of the sample.
3. Arduino UNO reads the sensor value through analog pin A0.
4. The sensor reading is displayed on the 16×2 I2C LCD.
5. The reading is compared with a selected threshold value of 200.
6. If the reading is greater than 200, the LCD displays **WATER DIRTY** and the buzzer turns ON.
7. If the reading is 200 or below, the LCD displays **WATER CLEAN** and the buzzer remains OFF.

## 🔌 Pin Connections

| Component | Arduino UNO |
|---|---|
| Turbidity Sensor | A0 |
| I2C LCD SDA | A4 |
| I2C LCD SCL | A5 |
| I2C LCD VCC | 5V |
| I2C LCD GND | GND |
| Buzzer | D8 |

## 📊 Results & Output

The prototype successfully reads the turbidity sensor value and displays the reading on the LCD.

- **Reading ≤ 200:** WATER CLEAN
- **Reading > 200:** WATER DIRTY and buzzer ON

The threshold value of 200 is selected for this prototype and can be calibrated according to the sensor and water samples used.

## 🌱 Applications

- Basic water turbidity monitoring
- Educational and academic projects
- Water-quality awareness demonstrations
- Preliminary water monitoring

## 🚀 Future Scope

The system can be enhanced by adding other water-quality sensors such as pH, temperature, and TDS sensors. An IoT module can also be integrated for remote monitoring, data logging, and real-time alerts.

## 💻 Program

The Arduino source code is available in:

`Water_Quality_Indicator.ino`

## 📸 Project Setup

The project consists of an Arduino UNO, turbidity sensor, 16×2 I2C LCD, and buzzer connected to monitor and indicate water turbidity.
