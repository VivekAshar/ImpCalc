#include "impedance.h"

int main()
{
    int mmip, smip;                     //mmip=main menu input & smip=sub menu input
    printf("Welcome to Impedance Calculator\n");
    printf("MENU:\n");
    printf("1. Resistor\n2. Capacitor\n3. Inductor\n4. RLC\n5. Resonant Frequency\n6. Exit\n");
    printf("Please enter the preferred option:\n");
    scanf("%d", &mmip);                 //get main-menu input

    //Function Pointers are used to make code efficient(code re-use is leveraged) and more understandable (by using logical funcptr name)
    float (*resistor_series)(int, float*) = &riscp;         
    float (*resistor_parallel)(int,float*) = &ripcs;
    float (*inductor_series)(int, float*) = &riscp;
    float (*inductor_parallel)(int,float*) = &ripcs;
    float (*capacitor_series)(int, float*) = &ripcs;
    float (*capacitor_parallel)(int,float*) = &riscp;        
    
    switch (mmip)
    {
    case 1://For RESISTANCE
    {
        printf("SUBMENU:\n");
        printf("1. Series Resistance\n2. Parallel Resistance\n");
        printf("Please enter the preferred option:\n");
        scanf("%d", &smip);             //get sub-menu input
        switch (smip)
        {
        case 1:
        {
            int n;                       /*  number of resistors   */
            printf("enter number of Resistors\n");
            scanf("%d", &n);
            if(n==0){printf("Invalid Input!! Try Again\n");}
            else
            {float a[n];                 /* Dynamic Array Declaration  */
            for (int i = 0; i < n; i++) // loop to get indviduval impedance
            {
                printf("enter resistance %d(unit in ohms)\n ", (i + 1));
                scanf("%f", &a[i]);
            }
            float res = (*resistor_series)(n, a);
            printf("\nequivalent series resistance = %f\n", res);
            }
            break;
        }

        case 2:
        {
            int n;                       /*  number of resistors   */
            printf("enter number of Resistors\n");
            scanf("%d", &n);
            if(n==0){printf("Invalid Input!! Try Again\n");}
            else
            {float a[n];                 /* Dynamic Array Declaration  */
            for (int i = 0; i < n; i++) // loop to get indviduval impedance
            {
                printf("enter resistance %d(unit in ohms)\n ", (i + 1));
                scanf("%f", &a[i]);
            }
            float res = (*resistor_parallel)(n, a);
            printf("\nequivalent parallel resistance = %f\n", res);
            }
            break;
        }
        default://For Incorrect Inputs
        {
            printf("Oops! You have entered an invalid choice, Kindly try again !!");
            break;
        }
        }
        break;
    }
    case 2://For CAPACITANCE
    {
        printf("SUBMENU:\n");
        printf("1. Series Capacitance\n2. Parallel Capacitance\n");
        printf("Please enter the preferred option:\n");
        scanf("%d", &smip);             //get sub-menu input
        switch (smip)
        {
        case 1:
        {
            int n;                      /*  number of resistors   */
            printf("enter number of Capacitors\n");
            scanf("%d", &n);
            if(n==0){printf("Invalid Input!! Try Again\n");}
            else
            {float a[n];                 /* Dynamic Array Declaration  */
            for (int i = 0; i < n; i++) // loop to get indviduval impedance
            {
                printf("enter Capacitance %d(unit in farad)\n ", (i + 1));
                scanf("%f", &a[i]);
            }
            float res = (*capacitor_series)(n, a);
            printf("\nequivalent Series Capacitance = %f\n", res);
            }
            break;
        }

        case 2:
        {
            int n;                       /*  number of resistors   */
            printf("enter number of Capacitors\n");
            scanf("%d", &n);
            if(n==0){printf("Invalid Input!! Try Again\n");}
            else
            {float a[n];                 /* Dynamic Array Declaration  */
            for (int i = 0; i < n; i++) // loop to get indviduval impedance
            {
                printf("enter Capacitance %d(unit in farad)\n ", (i + 1));
                scanf("%f", &a[i]);
            }
            float res = (*capacitor_parallel)(n, a);
            printf("\nequivalent Parallel Capacitance = %f\n", res);
            }
            break;
        }
        default://For Incorrect Inputs
        {
            printf("Oops! You have entered an invalid choice, Kindly try again !!");
            break;
        }        
        }
        break;
    }
    case 3://For INDUCTANCE
    {
        printf("SUBMENU:\n");
        printf("1. Series Indutance\n2. Parallel Inductance\n");
        printf("Please enter the preferred option:\n");
        scanf("%d", &smip);             //get sub-menu input
        switch (smip)
        {
        case 1:
        {
            int n;                      /*  number of resistors   */
            printf("enter number of Inductors\n");
            scanf("%d", &n);
            if(n==0){printf("Invalid Input!! Try Again\n");}
            else
            {float a[n];                 /* Dynamic Array Declaration  */
            for (int i = 0; i < n; i++) // loop to get indviduval impedance
            {
                printf("enter Inductance %d(unit in henry)\n ", (i + 1));
                scanf("%f", &a[i]);
            }
            float res = (*inductor_series)(n, a);
            printf("\nequivalent Series Indutance = %f\n", res);
            }
            break;
        }

        case 2:
        {
            int n;                      /*  number of resistors   */
            printf("enter number of Inductors\n");
            scanf("%d", &n);
            if(n==0){printf("Invalid Input!! Try Again\n");}
            else
            {float a[n];                 /* Dynamic Array Declaration  */
            for (int i = 0; i < n; i++) // loop to get indviduval impedance
            {
                printf("enter Inductance %d(unit in henry)\n ", (i + 1));
                scanf("%f", &a[i]);
            }
            float res = inductor_parallel(n, a);
            printf("\nequivalent Parallel Inductance = %f\n", res);
            }
            break;
        }
        default://For Incorrect Inputs
        {
            printf("Oops! You have entered an invalid choice, Kindly try again !!");
            break;
        }
        }
        break;
    }
    case 4://For RLC
    {
        printf("SUBMENU:\n");
        printf("1. Series Impedance\n2. Parallel Impedance\n");
        printf("Please enter the preferred option:\n");
        scanf("%d", &smip);             //get sub-menu input
        switch (smip)
        {
        case 1:
        {
            double r, l, c, f;          //Inputs
            printf("Enter the value of R(unit in ohm):\n");
            scanf("%lf", &r);
            printf("Enter the value of L(unit in henry):\n");
            scanf("%lf", &l);
            printf("Enter the value of C(unit in farad):\n");
            scanf("%lf", &c);
            printf("Enter the value of f(unit in hertz):\n");
            scanf("%lf", &f);
            if (l!=0 && c!=0 && f!=0)   
            {
                float res = RLCS(r, l, c, f);
                printf("Equivalent Series Impedance:%f ohms\n", res);
            }
            else
            {
                printf("Invalid Input!! Try Again\n");
            }
            break;
        }

        case 2:
        {
            double r, l, c, f;          //Inputs
            printf("Enter the value of R(unit in ohm):\n");
            scanf("%lf", &r);
            printf("Enter the value of L(unit in henry):\n");
            scanf("%lf", &l);
            printf("Enter the value of C(unit in farad):\n");
            scanf("%lf", &c);
            printf("Enter the value of f(unit in hertz):\n");
            scanf("%lf", &f);
            if (l!=0 && c!=0 && f!=0)   
            {
                float res = RLCP(r, l, c, f);
                printf("Equivalent Parallel Impedance:%f ohms\n", res);
            }
            else
            {
                printf("Invalid Input!! Try Again\n");
            }
            break;
        }
        default://For Incorrect Inputs
        {
            printf("Oops! You have entered an invalid choice, Kindly try again !!");
            break;
        }
        }
        break;
    }
    case 5://For RESONANT FREQUENCY
    {
        float l, c;             //Inputs
        printf("Enter the value of L(unit in henry):\n");
        scanf("%f", &l);
        printf("Enter the value of C(unit in farad):\n");
        scanf("%f", &c);
        if(l!=0 && c!=0)
        {
            float res = resfreq(l, c);
            printf("Resonant Frequency: %f\n", res);
        }
        else
        {
            printf("Invalid Input!! Try Again\n");
        }
        
        break;
    }
    case 6://For EXITING THE APPLICATION
    {
        printf("\nThanks for using the application\nHope to see you soon, byeee!\n");
        break;
    }
    default://For Incorrect Inputs
    {
        printf("Oops! You have entered an invalid choice, Kindly try again !!");
        break;
    }
    }
    return 0;
}