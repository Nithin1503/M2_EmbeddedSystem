# ARDUINO RELAY CONTROL

# TABLES OF CONTENTS

1. [INTRODUCTION](#introduction)

   1.1. [ABSTRACT](#abstract)

   1.2. [OBJECTIVE](#objective)
   
2. [REQUIREMENTS](#requriments)
   
   2.1. [HIGH LEVEL REQUIREMENTS](#high-level-requriment)
   
   2.2. [LOW LEVEL REQUIREMENTS](#low-level-requriment)

   2.3. [SWOT ANALYSIS](#swot-analysis)

   2.4. [5W'S 1H](#5w's-1h)

3. [BLOCK DIAGRAM & CIRCUIT DIAGRAM AND ITS COMPONENTS DESCRIPTION](#block-diagram-and-components)

   3.1. [BLOCK DIAGRAM](#block-diagram)
    
   3.2. [CIRCUIT DIAGRAM](#circuit-diagram)
   
   3.3. [COMPONENTS](#components)
   
   3.4. [COMPONENT DESCRIPTION](#component-description)

4. [ARCHITECTURE](#architecture)
   
   4.1. [BEHAVIOURAL DIAGRAMS](#behavioural-diagrams)
         
        4.1.1. [HIGH LEVEL](#high-level)
         
        4.1.2. [LOW LEVEL](#low-level)
   
   4.2. [STRUCTURAL DIAGRAMS](#structural-diagram)

         4.2.1. [HIGH LEVEL](#high-level)

         4.2.2. [LOW LEVEL](low-level)

 5. [APPLICATIONS](#applications)
 
 # 1.INTRODUCTION

 ## 1.1 ABSTRACT
 Microcontrollers are the heart of embedded systems. There are various types of embedded systems for different applications. The applications of embedded systems range from controlling small DC motors to use in industrial automation. When it comes to controlling high voltage devices, microcontrollers often depend on Relays to drive them. Relays act as a bridge between the low power microcontrollers and high voltage devices.


In this project, we are going to control a Relay using Arduino UNO to drive a high current load like a motor. Although the project is explained to drive a simple motor, similar implementation can be applied to control high voltage alternating current devices.

 ## 1.2 OBJECTIVE
 * To control the relay using arduino to drive a high current load.
 
 # 2.REQUIREMENTS
 
 ## 2.1 High Level Requirements:

ID     | Description
-------| -----------------------------------------
HLR 1  |When the push button is OFF the motor should turn OFF
HLR 2  |When the push button is ON the motor should turn ON
HLR 3  |Arduino should control the relay
HLR 4  |Relay should drive the motor

## 2.2 Low Level Requirements:

| ID | Low Level Requirements for HL1|       |ID | Low Level Requirements for HL2|
| -------- | -------------- | ---- |-------- | -------------- |
| LLR1.1 | When the push button is OFF the arduino should detects logic 0  | | LLR2.1 | When the push button is ON the arduino should detects logic 1 |
| LLR1.2 | When the arduino detects logic 0 the transistor will be OFF || LLR2.2 | When the arduino detects logic 1 the transistor will be ON  |

## 2.3 SWOT ANALYSIS

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

## 2.4 5W'S 1H

### WHAT
   This a controller that helps to control the relay by using ardunio to drive the high load.
### WHEN
   It is used when we need to automate the things.
### WHERE
   It can be used in home automations,remote control of appliances etc.
### WHO
   Normal consumers are the people who use this.
### WHY
   Inorder to control the relay.
### HOW
   By using a micro-controller, sensors and few actuators.
   
# 3. BLOCK DIAGRAM & COMPONENT DESCRIPTION

## 3.1 BLOCK DIAGRAM

![image](https://user-images.githubusercontent.com/98839429/157085978-5ad83a86-ebe9-4d27-93d4-041e82f8ec3a.png)

## 3.2 CIRCUIT DIAGRAM

![image](https://user-images.githubusercontent.com/98839429/157028923-33dc8b14-6ddf-479d-8b4a-c85668f534ed.png)

## 3.3 COMPONENTS 

* Arduino UNO
* Diode
* BJT Transistor
* 1KΩ Resistor
* Push button
* Power supply – 5V and 12V
* Motor

## 3.3 COMPONENTS DESCRIPTION

### ARDUINO UNO
As mentioned in the project introduction, a microcontroller is used to drive the relay. Hence, Arduino UNO, which is an ATmega 328P microcontroller based prototyping   board, is used in the project.

### SENSORS
#### PUSH BUTTON SENSOR
In this project i am used push button as a sensor it will send the signal to arduino to run.

### ACTUATORS

#### RELAY
A relay is a type of switch that provides connection between a low power circuit and a high power circuit. Electromechanical relays are the most commonly used relays and consists of a coil that acts as an electromagnet and moving contacts.

Generally, a relay consists of five terminals: two coil terminals, a common terminal (COMM), a normally open terminal (NO) and a normally closed terminal (NC).

A low power signal from a microcontroller is given to the coil (usually through a transistor) and the other three terminals i.e. NO, NC and COMM are connected to the high voltage supply along with the load. 

#### MOTOR
In this project i am used motor as High Level load.
    
### OTHER COMPONENTS

#### DOIDE
This diode acts as a flyback or a freewheeling diode in the circuit. Such diodes are often used in inductive circuits. When the power to the circuit is turned off, since the coil in the relay is an inductor, the current in it cannot be changed instantly. In such cases, a freewheeling diode provides a path to the current.

Diodes are often used in DC powered inductive circuits whereas a snubber circuit is used in AC powered inductive circuits.

#### BJT TRANSISTOR
It is an NPN transistor generally used for medium power amplifier and switching applications for currents up to 1 A. In this project, it is used as a switch which turns on or off the relay.
   
#### RESISTOR
It opposes the flow of current.
    
#### POWER SUPPLY
 AC power supply is converted to DC and given to the circuit in order to run it.
     
# 4.ARCHITECTURE

## 4.1 BEHAVIOURAL DIAGRAMS

### 4.1.1 HIGH LEVEL BEHAVIOURAL DIAGRAM

![HIGH LEVEL](https://user-images.githubusercontent.com/98839429/157086211-da9d5b95-6c2a-4a9f-9728-033c96d77590.png)

### 4.1.2 LOW LEVEL BEHAVIOURAL DIAGRAM

![LOW LEVEL](https://user-images.githubusercontent.com/98839429/157086556-434c3ffa-71c8-438f-9863-3ac77c0a703a.png)

## 4.2 STRUCTURAL DIAGRAMS

### 4.2.1 HIGH LEVEL STRUCTURAL DIAGRAM

![HIGH LEVEL](https://user-images.githubusercontent.com/98839429/157086840-30631403-6b69-417b-b4dc-0dfc71061ee4.png)

### 4.2.2 LOW LEVEL STRUCTURAL DIAGRAM

![LOW LEVEL](https://user-images.githubusercontent.com/98839429/156988501-913daa59-e6d2-4283-9b63-f50f25fe3064.png)

# 5.APPLICATIONS
  * In this project, an Arduino control of Relay is explained using a high current DC motor.
  * As mentioned earlier, the circuit can be extended AC systems. Such circuits can be used to implement AC motor control, home automation, remote control of appliances etc.
  * This circuit can also be implement in high power DC systems like motors, servos etc.
  * It is used in speed based appilcations of motor.
  * It is used in controlling unit of motors in vehicles and robots.


