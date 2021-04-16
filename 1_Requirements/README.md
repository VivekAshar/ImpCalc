
# Requirements

## Introduction
![LOGO2](https://github.com/ar4240/ImpCalc/blob/main/1_Requirements/logo2.jpeg)

* Secanrio 1: The problem arises from senior secondary, where students in physics would have faced a difficulty in checking the correctness and accuracy of the solution while solving combination of resistances and as days passed people would've found the same problem in calculation of combination in capacitances and inductance. Then once entering into colleges and universities, the problem gets multiplied & now with a combination of all the three passive components. Students would solve and practice, but always had a fear being unable to verify their solution.

* Secanrio 2: Apart from students, teachers and faculties from schools and colleges would also face the problem while framing the answer key for the same kind of questions and would rather mark an approximated value for the same and hence a chance of discrepancy and might cause a rework.

* Scenario 3: Manufacturers and Engineers in R&D can also have a delay in the work and a chance of error during manual calculation when t comes to extremely complex and large valued problem.

* The Solution: This Impedance calculator is developed using multiple programming concepts of C to aid in the above mentioned scenarios in cross-referring their manually calculated answers and speed up the operation with a greater accuracy for the latter case..

## Research
In the physics world and in the electronics industry, these resistors, capacitors and inductors collectively framed as a part passive elements play an pivot role.The passive components are those which are incapable of controlling current by means of another electrical signal.

#### Resistors:
A resistor is a two-terminal passive component that is used to resist the electric current in an electronic component. Resistors generally are used to reduce the current flow, signal levels, and to divide voltage. Resistors have an irreplaceable place in the electrical and electronic circuits. There are several types of resistors used in various type of components. They are high-power resistors, fixed resistors, variable resistors, three terminal variable resistors. Resistors are placed within integrated circuits.

#### Capacitor:
A capacitor is a component that has the ability or capacity be store the electric charge in it. The charge is stored in the form of energy. From very small capacitor that is bead size capacitor to the very large capacitor, all store energy. This effect of storing the electric charge is known as the capacitance. There are various types of capacitors present in the market. Some of the types of the capacitor are the dielectric material, voltage-dependent capacitors, frequency-dependent capacitors.

#### Inductor:
An inductor is a two terminal device used to store electrical energy in a magnetic field when electric current pass through it. An inductor consists of an electric conductor, such as a wire, that is wound into a coil. The inductor is also known as choke, that is just a coil of wire. It is designed to get a stronger magnetic field which we are not able to get from a simple coil of wire.

![R_L_C](https://github.com/ar4240/ImpCalc/blob/main/1_Requirements/R_L_C.png)

#### RLC:
RLC circuits have many applications as oscillator circuits. Radio receivers and television sets use them for tuning to select a narrow frequency range from ambient radio waves. In this role, the circuit is often referred to as a tuned circuit.

## Cost and Features
* The utility is developed using open-source tools and hence doesn't incur any cost. 
#### Features:
* User intuitive CLI with multiple menu's.
* Works in both linux and windows.
* Can calculate Series Combination for:
    a. Equivalent Resistance
    b. Equivalent Capacitance
    c. Equivalent Inducatance
    d. RLC Impedance 
* Can calculate Parallel Combination for:
    a. Equivalent Resistance
    b. Equivalent Capacitance
    c. Equivalent Inducatance
    d. RLC Impedance 
* Can calculate Resonant Frequency to help in tuning.


## Defining Our System
![SysDiag](https://github.com/ar4240/ImpCalc/blob/main/1_Requirements/SYS_DIAG.png)
## SWOT ANALYSIS
![SWOT](https://github.com/ar4240/ImpCalc/blob/main/1_Requirements/SWOT.jpg)

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
