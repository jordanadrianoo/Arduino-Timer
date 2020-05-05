# Arduino Timer

This arduino project is inspired by the "Arduino Projects Book" project 8 by Scogg Fitzgerald and Michael Shiloh. This project uses simple light nodes to indicate intervals of time dividable  by 6 and will use a piezo to sound off a catchy Mario jingle. In addition, a tactile switch is used to reset the timer and start over. Time intervals is noted in milliseconds and can be extend or trim the timer. 

# Getting Started
  
  **Prerequisites**:
  
  **Hardware:**
  - Arduino Uno
  - USB type B
  - Breadboard
  - Jumper Wires
  - Piezo  
  - tactile switch button
  - x6 light nodes
  - x6 220 OHM Resistor
  - 10 KILOHM Resistor

 **Resistor Reference Chart**
  
 <img src="Project Pictures/Resistor-Chart.png" width="700" height="600">
 
 **Software:**
 
 - [Arduino API Downloads](https://www.arduino.cc/en/main/software)
 - [Windows Installation Guide](https://www.arduino.cc/en/guide/windows)
 - [IOS Installation Guide](https://www.arduino.cc/en/guide/macOSX)
 - [Arduino Uno Setup Guide](https://www.arduino.cc/en/Guide/ArduinoUno)
 
 
 # Arduino Schematics
 
 **Arduiono Schematics without Piezo**
 
 <img src="Project Pictures/Arduino Blueprints.jpg" width="700" height="400">
 
 **Arduino Schematics with Piezo**
 
 <img src="Project Pictures/Arduino Timer Schematic.jpg"  width="700" height="400">
 
 *Note that the piezo is connected to port 13 on the arduino and ground on the breadboard*
 
 
# Jingle Sheet Music

<img src = "Project Pictures/Mario Intro Sheet Music.PNG" width="900" height="400">

Once the timer reaches its end goal, it will preform this mario jingle. The notes are as follows: E E E C E G G. Becuase a piezo plays Wavelength, it is essiential to transform each note into its Wavelength equivalent and play them in order while accounting for rhythm.

**Wavelength Note equivilance** 

|Notes          | Wavelength     |
| ------------- | ---------------|
| E             | 659            | 
| c             | 523            |  
| High G        | 784            |   
| Low G         | 392            | 

# Sources and References


 - [Arduino](https://www.arduino.cc/)
 - [Arduino Uno](https://store.arduino.cc/usa/arduino-starter-kit)
 - [Music Note Wavelengths](https://pages.mtu.edu/~suits/notefreqs.html)
