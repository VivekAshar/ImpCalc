
#ifndef __impedance_h__
#define __impedance_h__

#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#define pi 3.142

float ripcs(int n, float *a);
float riscp(int n, float *a);
float RLCS (float r,float l,float c,float f);
float RLCP (float r,float l,float c,float f);
float resfreq(float l,float c);

#endif