#include "impedance.h"

float ripcs(int n, float *a)
{
 float temp,er;
 er=a[0];
 for(int i=1;i<n;i++)
 {
     temp=(1/er)+((1/a[i]));        /* cast r2 to float  */
     er=(1/temp);
 }
 return er;
}

float riscp(int n, float *a)
{
    float res=0;
    for(int i=0;i<n;i++)
    {
        res+=a[i];
    }
 return res;
}