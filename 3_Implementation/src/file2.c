#include "impedance.h"
//#include<stdio.h>

int RLCS ()
{
    double r,l,c;
    double f;
    printf("Enter the value of R(unit in ohm):\n");
    scanf("%lf",&r);
    printf("Enter the value of L(unit in henry):\n");
    scanf("%lf",&l);
    printf("Enter the value of C(unit in farad):\n");
    scanf("%lf",&c);
    printf("Enter the value of f(unit in hertz):\n");
    scanf("%lf",&f);
    double xl,xc,z;
    xl=(2*pi*f*l);
    xc=(1/(2*pi*f*c));
    z=sqrt((pow(r,2)+pow((xl-xc),2)));
    printf("Equivalent Series Impedance:%f ohms\n",z);
    
}

int RLCP ()
{
    double r,l,c;
    double f;
    printf("Enter the value of R(unit in ohm):\n");
    scanf("%lf",&r);
    printf("Enter the value of L(unit in henry):\n");
    scanf("%lf",&l);
    printf("Enter the value of C(unit in farad):\n");
    scanf("%lf",&c);
    printf("Enter the value of f(unit in hertz):\n");
    scanf("%lf",&f);
    double xl,xc,z;
    xl=(2*pi*f*l);
    xc=(1/(2*pi*f*c));
    z=sqrt((pow((1/r),2)+pow(((1/xl)-(1/xc)),2)));
    printf("Equivalent Parallel Impedance:%f ohms\n",(1/z));
    
}

int resfreq()
{
    double l,c;
    printf("Enter the value of L(unit in henry):\n");
    scanf("%lf",&l);
    printf("Enter the value of C(unit in farad):\n");
    scanf("%lf",&c);
    double f=0.0,s=0.0,result;
    s=l*c;
    result=sqrt(s);
    f=1/(2*pi*result);
    printf("Resonant Frequency: %f\n",f);
}