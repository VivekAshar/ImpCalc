#include "impedance.h"
#include<math.h>
int main()
{
int mmip,smip;
    printf("Welcome to Impedance Calculator\n");
    printf("MENU:\n");
    printf("1. Resistor\n2. Capacitor\n3. Inductor\n4. RLC\n5. Resonant Frequency\n6. Exit\n");
    printf("Please enter the preferred option:\n");
    scanf("%d",&mmip);
    switch(mmip)
    {
        case 1:
        {
            printf("SUBMENU:\n");
            printf("1. Series Resistance\n2. Parallel Resistance\n");
            printf("Please enter the preferred option:\n");
            scanf("%d",&smip);
            switch(smip)
            {
                case 1:    {
                            int n;    /*  number of resistors   */
                            printf("enter number of Resistors\n");
                            scanf("%d",&n);
                            float a[n];                /*  equivalent resistance  */
                            for(int i=0;i<n;i++)    
                            {
                                printf("enter resistance %d(unit in ohms)\n ",(i+1));
                                scanf("%f",&a[i]);
                            }
                            float res=riscp(n,a);
                            
                            printf("\nequivalent series resistance = %f\n",res);
                            break;
                    
                            }
                
                case 2:    {
                            int n;    /*  number of resistors   */
                            printf("enter number of Resistors\n");
                            scanf("%d",&n);
                            float a[n];                /*  equivalent resistance  */
                            for(int i=0;i<n;i++)    
                            {
                                printf("enter resistance %d(unit in ohms)\n ",(i+1));
                                scanf("%f",&a[i]);
                            }
                            float res=ripcs(n,a);
                            
                            printf("\nequivalent parallel resistance = %f\n",res);
                            break;
                            }
            }break;
        } 
        case 2:
        {
            printf("SUBMENU:\n");
            printf("1. Series Capacitance\n2. Parallel Capacitance\n");
            printf("Please enter the preferred option:\n");
            scanf("%d",&smip);
            switch(smip)
            {
                case 1:    {
                            int n;    /*  number of resistors   */
                            printf("enter number of Capacitors\n");
                            scanf("%d",&n);
                            float a[n];                /*  equivalent resistance  */
                            for(int i=0;i<n;i++)    
                            {
                                printf("enter Capacitance %d(unit in farad)\n ",(i+1));
                                scanf("%f",&a[i]);
                            }
                            float res=ripcs(n,a);
                            
                            printf("\nequivalent Series Capacitance = %f\n",res);
                            break;
                    
                            }
                
                case 2:    {
                            int n;    /*  number of resistors   */
                            printf("enter number of Capacitors\n");
                            scanf("%d",&n);
                            float a[n];                /*  equivalent resistance  */
                            for(int i=0;i<n;i++)    
                            {
                                printf("enter Capacitance %d(unit in farad)\n ",(i+1));
                                scanf("%f",&a[i]);
                            }
                            float res=riscp(n,a);
                            
                            printf("\nequivalent Parallel Capacitance = %f\n",res);
                            break;
                            }
            }break;
        }
        case 3:
        {
            printf("SUBMENU:\n");
            printf("1. Series Indutance\n2. Parallel Inductance\n");
            printf("Please enter the preferred option:\n");
            scanf("%d",&smip);
            switch(smip)
            {
                case 1:    {
                            int n;    /*  number of resistors   */
                            printf("enter number of Inductors\n");
                            scanf("%d",&n);
                            float a[n];                /*  equivalent resistance  */
                            for(int i=0;i<n;i++)    
                            {
                                printf("enter Inductance %d(unit in henry)\n ",(i+1));
                                scanf("%f",&a[i]);
                            }
                            float res=riscp(n,a);
                            
                            printf("\nequivalent Series Indutance = %f\n",res);
                            break;
                    
                            }
                
                case 2:    {
                            int n;    /*  number of resistors   */
                            printf("enter number of Inductors\n");
                            scanf("%d",&n);
                            float a[n];                /*  equivalent resistance  */
                            for(int i=0;i<n;i++)    
                            {
                                printf("enter Inductance %d(unit in henry)\n ",(i+1));
                                scanf("%f",&a[i]);
                            }
                            float res=ripcs(n,a);
                            
                            printf("\nequivalent Parallel Inductance = %f\n",res);
                            break;
                    
                } 
            }break;
        }
        case 4:
        {
            printf("SUBMENU:\n");
            printf("1. Series Impedance\n2. Parallel Impedance\n");
            printf("Please enter the preferred option:\n");
            scanf("%d",&smip);
            switch(smip)
            {
                case 1:    {double r,l,c,f;
                            printf("Enter the value of R(unit in ohm):\n");
                            scanf("%lf",&r);
                            printf("Enter the value of L(unit in henry):\n");
                            scanf("%lf",&l);
                            printf("Enter the value of C(unit in farad):\n");
                            scanf("%lf",&c);
                            printf("Enter the value of f(unit in hertz):\n");
                            scanf("%lf",&f);
                            float res=RLCS(r,l,c,f);
                            printf("Equivalent Series Impedance:%f ohms\n",res);
                            break;}
                
                case 2:    {double r,l,c,f;
                            printf("Enter the value of R(unit in ohm):\n");
                            scanf("%lf",&r);
                            printf("Enter the value of L(unit in henry):\n");
                            scanf("%lf",&l);
                            printf("Enter the value of C(unit in farad):\n");
                            scanf("%lf",&c);
                            printf("Enter the value of f(unit in hertz):\n");
                            scanf("%lf",&f);
                            float res=RLCP(r,l,c,f);
                            printf("Equivalent Parallel Impedance:%f ohms\n",res);
                            break;}
            }
            break;
        }
        case 5:
        {
            float l,c;
            printf("Enter the value of L(unit in henry):\n");
            scanf("%f",&l);
            printf("Enter the value of C(unit in farad):\n");
            scanf("%f",&c);
            float res=resfreq(l,c);
            printf("Resonant Frequency: %f\n",res);
            break;
        }
        case 6:
        {
            printf("\nThanks for using the application\nHope to see you soon, byeee!\n");
            //exit(0);
        }
        default:
        {
            printf("Oops! You have entered an invalid choice, Kindly try again !!");
            break;
        }
        
    }
    return 0;
}
