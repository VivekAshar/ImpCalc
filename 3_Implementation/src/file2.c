#include "impedance.h"

double powr(float a, int t)                      //To Calculate Power
{
    double ans = 0;
    if (t == 2)
    {
        ans = a * a;
    }
    return ans;
}
double sqrrt(double n)                           //To Calculate SquareRoot
{
    double i, precision = 0.00001;

    for (i = 1; i * i <= n; ++i);             //Integer part

    for (--i; i * i < n; i += precision);     //Fractional part

    return i;
}

float RLCS(float r, float l, float c, float f)     //To Calculate RLC Series Combination
{
    float xl, xc;
    xl = (2 * pi * f * l);
    xc = (1 / (2 * pi * f * c));
    if(!(xl==0 && xc==0))
    {
        float z = sqrrt((powr(r, 2) + powr((xl - xc), 2)));
        return z;
    }
    else
    {
        return 0;
    }
}

float RLCP(float r, float l, float c, float f)     //To Calculate RLC Parallel Combination
{
    double xl, xc;
    xl = (2 * pi * f * l);
    xc = (1 / (2 * pi * f * c));
    if(!(xl==0 && xc==0))
    {
        double z = sqrrt((powr((1 / r), 2) + powr(((1 / xl) - (1 / xc)), 2)));
        if(z!=0)
        {
            return (1 / z);
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

float resfreq(float l, float c)                     //To Calculate Resonant Frequency
{
    float s = 0.0, result;
    s = l * c;
    result = sqrrt(s);
    if(result!=0)
    {
        float f = 1 / (2 * pi * result);
        return f;
    }
    else
    {
        return 0;
    }
}