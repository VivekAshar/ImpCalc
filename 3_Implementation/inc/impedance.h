/**
 * @file impedance.h
 * @author Adithya Vamsi (SF: 256174)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __impedance_h__
#define __impedance_h__

#include<stdio.h>
#include<stdlib.h>
#define pi 3.142 // PI value is declared to be used throughout the program
/**
 * @brief Structure to calculate resonant frequency
 * 
 */
struct resofreq
{
    float l; // Inductance
    float c; //Capacitance
};

/**
 * @Function to calculate Resistance Inducatance Parallel and Capacitor Series shortened as ripcs
 * 
 * @param n: Total Number of elements 
 * @param a: Pointer pointing to the value of each element
 * @return float: The final output is returned 
 */
float ripcs(int n, float *a);

/**
 * @brief: Function to calculate Resistance Inducatance Series and Capacitor Parallel shortened as riscp
 * 
 * @param n: Total Number of elements 
 * @param a: Pointer pointing to the value of each element
 * @return float: The final output is returned 
 */
float riscp(int n, float *a);

/**
 * @brief: Function to calculate series combination of RLC Circuit
 * 
 * @param r : Resistance
 * @param l : Inductance
 * @param c : Capacitance
 * @param f : Frequency
 * @return float : The final output is returned 
 */
float RLCS (float r,float l,float c,float f);

/**
 * @brief: Function to calculate parallel combination of RLC Circuit
 * 
 * @param r : Resistance
 * @param l : Inductance
 * @param c : Capacitance
 * @param f : Frequency
 * @return float : The final output is returned 
 */
float RLCP (float r,float l,float c,float f);

/**
 * @brief : Function to calculate Resonant Frequency
 * 
 * @param a : Structure which contains two variables for inductance and capacitance
 * @return float : The final output is returned
 */
float resfreq(struct resofreq a);

/**
 * @brief To manually calculate the power of a number
 * 
 * @param a : Base
 * @param t : Power/Exponent
 * @return double : The final output is returned 
 */
double powr(float a,int t);

/**
 * @brief TO manually calculate the squareroot of a nymber
 * 
 * @param n : Base
 * @return double : The final output is returned
 */
double sqrrt(double n);

#endif