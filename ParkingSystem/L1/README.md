# IOT PARKING SYSTEM
# Part One
**Duration: 45 mins - 1hr**


This is an IOT based parking system. It uses an ultrasonic sensor to sense whether a parking spot is occupied or unoccupied.
An empty parking slot will light the green LED light while an occupied one will light the red LED light.

## Components
- 2 LEDS, 1 green, 1 red
- 1 HC-SR04 Ultrasonic Sensor
- 1 Breadboard - Rows marked in letters and columns marked in numbers
- 1 Arduino UNO
- 12 M-M jumper wires
- 1 USB cable
- 1 Passive Buzzer 
- Software: Arduino IDE, already installed

## Overview
- **Step 1:** Wire the components  
- **Step 2:** Copy paste the code template
- **Step 3:** Connect the board in the IDE
- **Step 4:** Complete the code

## Instructions
1. Mount one jumper wire to a negative marked (-) end row on the breadboard and connect the free end to the GND pin on the Arduino Uno. The whole end row is now connected to GND.

2. Mount the ultrasonic sensor to the breadboard facing away from the arduino. Ensure the pins take up one row. Add 4 jumper wires to the breadboard, one for each of the ultrasonic pins and in the same row as the pins.

3. Plug the free ends of the jumper wires in line with the respective ultrasonic pins to the Arduino as follows:

- GND to GND 
- VCC to 5v 
- Echo and trig pins to digital pins (marked 0-13)

4. Connect the USB to the Arduino and to the laptop USB port, launch the Arduino IDE and at the top bar select the Arduino Uno board.

5. Copy the code from parking_system_sketch.ino and run it to ensure the ultrasonic sensor is measuring proximity of objects to it. You should see distances being logged on the serial monitor.

### ----------------------------------------------------------------------
### Checkpoint 1: Serial monitor is printing distances from the ultrasonic sensor

### ----------------------------------------------------------------------

### Connect the LEDs
6. Connect the LEDs to the breadboard along free rows.

7. Connect jumper wires along the rows of the LEDs on the breadboard to the Arduino digital pins. Note that you should connect the Longer side of the LED to a digital pin (it is the anode/+ve) and the shorter side of the LED to the GND row (it is the cathode/-ve).

8. Modify the code such that when the threshold set is detected, the **Red LED** *turns on* and the **Green LED** *turns off* else when the threshold is not detected, the **Red LED** *turns off* and the **Green LED** *turns on* to indicate the parking spot is free.

### ----------------------------------------------------------------------
### Checkpoint 2: Ensure the LED is lighting red when an object is infront of the ultrasonic sensor and green when there is no object in front of the sensor

### ----------------------------------------------------------------------

# Part Two (Adding a buzzer)
**Duration: Extra 10 - 20 mins after completing part one**

Great job on completing the first part! We are now going to make our sensor more functional, so let's say that you are parking your vehicle and want some kind of notification that you have reached the end of the parking spot. To ensure that you don't hit the wall, we are going to add a buzzer that will play a tone to notify the driver that they have reached the end of the slot.

### The challenge
The challenge is to connect a buzzer to the arduino that will play a tone when **Red LED** is turned on. 

If you want to take this further can you modify your code so that the buzzer can maintain state such that after it has played the tone and the car is still in the parking slot the tone will not be played again until the parking slot is reocuppied.

Feel free to brainstorm and bing on how to go about this challenge and the only hint we can give you is looking at the arduino `tone()` function and how it is used. 

Good Luck!
