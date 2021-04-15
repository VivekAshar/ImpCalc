#include "impedance.h"
#include<math.h>
#include<stdio.h>

float RLCS (float r,float l,float c,float f)
{
    float xl,xc,z;
    xl=(2*pi*f*l);
    xc=(1/(2*pi*f*c));
    z=sqrt((pow(r,2)+pow((xl-xc),2)));
    return z;
}

float RLCP (float r,float l,float c,float f)
{
    double xl,xc,z;
    xl=(2*pi*f*l);
    xc=(1/(2*pi*f*c));
    z=sqrt((pow((1/r),2)+pow(((1/xl)-(1/xc)),2)));
    return (1/z);
}

float resfreq(float l,float c)
{
    float f=0.0,s=0.0,result;
    s=l*c;
    result=sqrt(s);
    f=1/(2*pi*result);
    return f;
}