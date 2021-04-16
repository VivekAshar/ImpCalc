#include "impedance.h"

float ripcs(int n, float *a) //Calculates R-Parallel Comination||I-Parallel Comination||C-Series Comination
{
    float er;
    er = a[0];
    if (n == 1)
    {
        return (er);
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            float temp = (1 / er) + ((1 / a[i]));
            er = (1 / temp);
        }
        return er;
    }
}

float riscp(int n, float *a) //Calculates R-Series Comination||I-Series Comination||C-Parallel Comination
{
    if (n == 1)
    {
        return a[0];
    }
    else
    {
        float res = 0;
        for (int i = 0; i < n; i++)
        {
            res += a[i];
        }
        return res;
    }
}