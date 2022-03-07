# ARDUINO RELAY CONTROL
# DESCRIPTION

The intention behind the project is to explain how a microcontroller (in this case, an Arduino) can be used to control a high voltage and high current devices using a relay.

# REQUIREMENTS
 
 ## High Level Requirements:

ID     | Description
-------| -----------------------------------------
HLR 1  |When the push button is OFF the motor should turn OFF
HLR 2  |When the push button is ON the motor should turn ON
HLR 3  |Arduino should control the relay
HLR 4  |Relay should drive the motor.

## Low Level Requirements

| ID | Low Level Requirements for HL1|       |ID | Low Level Requirements for HL2|
| -------- | -------------- | ---- |-------- | -------------- |
| LLR1.1 | When the push button is OFF the arduino should detects logic 0  | | LLR2.1 | When the push button is ON the arduino should detects logic 1 |
| LLR1.2 | When the arduino detects logic 0 the transistor will be OFF || LLR2.2 | When the arduino detects logic 1 the transistor will be ON  |


## SWOT ANALYSIS

### STRENGTH

  * Simple
  * Automation
  * Easy to control
  * Less power consumption.

### WEAKNESS

  * Can be damaged by external factors.
  * Push button can damage easily.

### OPPURTUNITIES

  * Adopting to new technology.
  * Automation can be achieved.
  * Can be developed to remote control appliances.

### THREATS

  * External Damage.
  * Theft

## 5W'S 1H

### WHAT
   This a controller that helps to control the motor  by using relay.
### WHEN
   It is used when we need to automate the things.
### WHERE
   It can be used in home automations,remote control of appliances etc.
### WHO
   Normal consumers are the people who use this.
### WHY
   Inorder to control the motor.
### HOW
   By using a micro-controller, sensors and few actuators.
