# ARDUINO RELAY CONTROL

# TABLES OF CONTENTS

1. [INTRODUCTION](#introduction)

   1.1. [ABSTRACT](#abstract)

   1.2. [OBJECTIVE](#objective)
   
2. [REQUIREMENTS](#requriments)
   
   2.1. [High Level Requriment](#high-level-requriment)
   
   2.2. [Low Level Requriment](#low-level-requriment)

   2.3. [SWOT ANALYSIS](#swot-analysis)

   2.4. [5W'S 1H](#5w's-1h)

3. [BLOCK DIAGRAM & CIRCUIT DIAGRAM AND ITS COMPONENTS DESCRIPTION](#block-diagram-and-components)

   3.1. [BLOCK DIAGRAM](#block-diagram)
    
   3.2. [CIRCUIT DIAGRAM](#circuit-diagram)
   
   3.3. [COMPONENT DESCRIPTION](#component-description)

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
HLR 1  |To Refill the water tank automatically when tank becomes empty.
HLR 2  |Alert the user when the tank is filled.
HLR 3  |To check the quality of water and alert user.
HLR 4  |To turn ON the motor when the tank becomes empty.

## 2.2 Low Level Requirements:


ID     | Description
-------| -----------------------------------------
LLR 1  |A Microcontroller is used for controlling the process.
LLR 1.1  |A water level sensor is used to check the water level.
LLR 2  |Buzzer is used to alert the user.
LLR 3  |A water Quality sensor is used to chechk the quality of the water
LLR 4  |A Motor Driver shall be used to switch ON the motor.

## 2.3 SWOT ANALYSIS

### STRENGTH

  * Automation
  * Wastage of water is eliminated.
  * Water quality is maintained
  * Less power consumption.

### WEAKNESS

  * Can be damaged by external factors.
  * Sensors need frequents cleaning.

### OPPURTUNITIES

  * Adopting to new technology.
  * Automation can be achieved.
  * Can be developed to purifier as well.

### THREATS

  * External Damage.
  * Theft

## 2.4 5W'S 1H

### WHAT
   This a controller that helps to automaticlly refill the water tank using sensors and micro controller.
### WHEN
   It is used when we need to fill water to the pressure tank.
### WHERE
   It can be used in domestic,Industrial as well as Commercial complexes.
### WHO
   Normal consumers are the people who use this.
### WHY
   Inorder to refill water to the tank without wastage.
### HOW
   By using a micro-controller, sensors and few actuators.
   
# 3. BLOCK DIAGRAM & COMPONENT DESCRIPTION

## 3.1 BLOCK DIAGRAM

![image](https://user-images.githubusercontent.com/98815562/155871277-697ab2ee-c0bb-45dd-9eaa-49acb325e3ab.png)

## 3.2 COMPONENTS DESCRIPTION

### Microcontroller
      Microcontroller is used to control the overall process in automating the refill of water into the tank.

### SENSORS
#### Water level sensor
    Two water level sensors are used to detect the water level. One for detecting if the tank is empty and another one detecting the top level of the tank.

#### Water Quality sensor
    A water quality sensor is used to check the sediments and excess chlorine in the water and alert the user.

### ACTUATORS

#### Motor Driver Circuit
    Motor Driver circuit is used to switch on and off the based upon the signals received from the sensors.

#### Buzzer
    A buzzer is used to alert the user once the tank is filled.

#### LED’s
    Two LED’s are used to alert the user regarding the quality of the water.
     * RED – The water is impure.
     * GREEN – The water is pure.

### Power Supply
     AC power supply is converted to DC and given to the circuit in order to run it.
     
# 4.ARCHITECTURE

## 4.1 BEHAVIOURAL DIAGRAMS

### 4.1.1 HIGH LEVEL BEHAVIOURAL DIAGRAM

![HIGH LEVEL](https://user-images.githubusercontent.com/98815562/155871590-bd805006-668d-470c-b722-aff56ff43e8f.png)

### 4.1.2 LOW LEVEL BEHAVIOURAL DIAGRAM

![LOW LEVEL](https://user-images.githubusercontent.com/98815562/155871625-8b8a5161-09f7-42a5-9650-374fd5274952.png)

## 4.2 STRUCTURAL DIAGRAMS

### 4.2.1 HIGH LEVEL STRUCTURAL DIAGRAM

![HIGH LEVEL](https://user-images.githubusercontent.com/98815562/155871676-56d668e8-d931-49cf-9be5-e3ae46af8d35.png)

### 4.2.2 LOW LEVEL STRUCTURAL DIAGRAM

![LOW LEVEL](https://user-images.githubusercontent.com/98815562/155871682-040c1e9a-2aa3-4144-834e-76bd9ea63c4c.png)

# 5.APPLICATIONS
  * Houses
  * Industries
  * Schools
  * Hospitals
  * Commercial complexes

