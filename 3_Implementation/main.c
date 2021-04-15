#include "impedance.h"

int main()
{
    int mmip, smip;                     //mmip=main menu input & smip=sub menu input
    typedef float f;
    printf("Welcome to Impedance Calculator\n");
    printf("MENU:\n");
    printf("1. Resistor\n2. Capacitor\n3. Inductor\n4. RLC\n5. Resonant Frequency\n6. Exit\n");
    printf("Please enter the preferred option:\n");
    scanf("%d", &mmip);                 //get main-menu input

    //Function Pointers are used to make code efficient(code re-use is leveraged) and more understandable (by using logical funcptr name)
    f (*resistor_series)(int, f*) = &riscp;         
    f (*resistor_parallel)(int,f*) = &ripcs;
    f (*inductor_series)(int, f*) = &riscp;
    f (*inductor_parallel)(int,f*) = &ripcs;
    f (*capacitor_series)(int, f*) = &ripcs;
    f (*capacitor_parallel)(int,f*) = &riscp;        
    
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
            {f a[n];                 /* Dynamic Array Declaration  */
            for (int i = 0; i < n; i++) // loop to get indviduval impedance
            {
                printf("enter resistance %d(unit in ohms)\n ", (i + 1));
                scanf("%f", &a[i]);
            }
            f res = (*resistor_series)(n, a);
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
            {f a[n];                 /* Dynamic Array Declaration  */
            for (int i = 0; i < n; i++) // loop to get indviduval impedance
            {
                printf("enter resistance %d(unit in ohms)\n ", (i + 1));
                scanf("%f", &a[i]);
            }
            f res = (*resistor_parallel)(n, a);
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
            {f a[n];                 /* Dynamic Array Declaration  */
            for (int i = 0; i < n; i++) // loop to get indviduval impedance
            {
                printf("enter Capacitance %d(unit in farad)\n ", (i + 1));
                scanf("%f", &a[i]);
            }
            f res = (*capacitor_series)(n, a);
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
            {f a[n];                 /* Dynamic Array Declaration  */
            for (int i = 0; i < n; i++) // loop to get indviduval impedance
            {
                printf("enter Capacitance %d(unit in farad)\n ", (i + 1));
                scanf("%f", &a[i]);
            }
            f res = (*capacitor_parallel)(n, a);
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
            {f a[n];                 /* Dynamic Array Declaration  */
            for (int i = 0; i < n; i++) // loop to get indviduval impedance
            {
                printf("enter Inductance %d(unit in henry)\n ", (i + 1));
                scanf("%f", &a[i]);
            }
            f res = (*inductor_series)(n, a);
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
            {f a[n];                 /* Dynamic Array Declaration  */
            for (int i = 0; i < n; i++) // loop to get indviduval impedance
            {
                printf("enter Inductance %d(unit in henry)\n ", (i + 1));
                scanf("%f", &a[i]);
            }
            f res = inductor_parallel(n, a);
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
            double r, l, c, fq;          //Inputs
            printf("Enter the value of R(unit in ohm):\n");
            scanf("%lf", &r);
            printf("Enter the value of L(unit in henry):\n");
            scanf("%lf", &l);
            printf("Enter the value of C(unit in farad):\n");
            scanf("%lf", &c);
            printf("Enter the value of f(unit in hertz):\n");
            scanf("%lf", &fq);
            if (l!=0 && c!=0 && fq!=0)   
            {
                f res = RLCS(r, l, c, fq);
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
            double r, l, c, fq;          //Inputs
            printf("Enter the value of R(unit in ohm):\n");
            scanf("%lf", &r);
            printf("Enter the value of L(unit in henry):\n");
            scanf("%lf", &l);
            printf("Enter the value of C(unit in farad):\n");
            scanf("%lf", &c);
            printf("Enter the value of f(unit in hertz):\n");
            scanf("%lf", &fq);
            if (l!=0 && c!=0 && fq!=0)   
            {
                f res = RLCP(r, l, c, fq);
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
        f l, c;             //Inputs
        printf("Enter the value of L(unit in henry):\n");
        scanf("%f", &l);
        printf("Enter the value of C(unit in farad):\n");
        scanf("%f", &c);
        if(l!=0 && c!=0)
        {
            f res = resfreq(l, c);
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