# smart-customizable-voltage-switch
A smart, Arduino-based voltage protection switch that monitors input voltage. When it exceeds a set threshold (e.g., 6V), the system turns off the load using an NMOS and triggers a buzzer for 3 seconds. Ideal for DIY projects needing voltage protection and alert systems.

## Features
- Real-time voltage monitoring
- Auto power cut-off at high voltage
- 3-second buzzer alert on cutoff
- Customizable voltage threshold using a potentiometer

## Components
- Arduino Uno
- NMOS transistor
- Potentiometer
- Buzzer
- 9V Battery
- Resistor (1)
- Multimeter (for measurement)
- LED

## Working
The potentiometer adjusts a threshold voltage. Arduino reads the voltage level and compares it. If voltage > threshold, it turns off the NMOS and activates the buzzer for 3 seconds.

## How to Use
1. Connect components as per the circuit.
2. Upload Arduino code using the Arduino IDE.
3. Adjust the potentiometer for voltage limit.
4. Power with 9V battery and observe behavior.

