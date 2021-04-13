Requirements
Capture all the requirements wrt system, module, interface, integration, testing, Functional and Non-functional

Captures Basic Planning of the project through - Sample Gantt Chart attached

Tools: MS Excel, MS word or Similar

# Requirements
## Introduction
 --- TBD 

## Research
![Description]()
-- Content 
## Cost and Features
![Description](Link to Pic)
-- Content 
## Defining Our System
    -- TBD
## SWOT ANALYSIS
![SWOT-Sample](https://github.com/ar4240/ImpCalc/blob/main/1_Requirements/SWOT.jpg)

# 4W&#39;s and 1&#39;H

## Who:

**Engineers can fast track the verification process.**

## What:

**Impedance Calculator used to calculate series and parallel impedance of basic and advanced circuits.**

## When:

**Can be used during the testing phase of the project to identify errors.**
**Can be used by faculties to check the correctness of solutions and by students during practice.**

## Where:

**Electronics and Manufacturing Industries & Colleges**

## How:

**Using a menu driven program that calculates impedance according to the needs.**


# Detail requirements
## High Level Requirements: 
| ID | Description | Status | 
| ----- | ----- | ---------|
| HR01 | User shall select an option from the main menu(R/L/c/RLC) | Implemented | 
| HR02 | User shall select an option from the sub menu(Series/Parallel)  | Implemented |
| HR03 | User have to enter the required values | Implemented |
| HR04 | The program must throw errors if any uncertainities | Implemented |
| HR05 | User can copy the old result | Future |

##  Low level Requirements:

|ID  | Description | HLR-ID | Status (Implemented/Future)|
|----|-------------|--------|----------------------------|
|LR01| User has to enter the type of impedance(R/L/C/RLC) | HR01 | Implemented |
|LR02| Throw an error if the choice is out of bound | HR01 | Implemented |
|LR03| User can calculate the resonant frequency if required from the main menu | HR01 | Implemented |
|LR04| For the selection in LR01, user has to choose the combination of impedance | HR02 | Implemented |
|LR05| Throw an error if the choice is out of bound | HR02 | Implemented |
|LR06| User has to input the number of passive components | HR03 | Implemented |
|LR07| User has to input the absolute value of each component | HR03 | Implemented |
|LR08| Throw an error if any absurd value is detected | HR04 | Implemented |
|LR09| User can copy the old inputs & output | HR05 | Future | 