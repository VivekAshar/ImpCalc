#include "impedance.h"

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
                case 1:    {riscp(mmip,smip);break;}
                
                case 2:    {ripcs(mmip,smip);break;}
            }
            break;
        }
        case 2:
        {
            printf("SUBMENU:\n");
            printf("1. Series Capacitance\n2. Parallel Capacitance\n");
            printf("Please enter the preferred option:\n");
            scanf("%d",&smip);
            switch(smip)
            {
                case 1:    {ripcs(mmip,smip);break;}
                
                case 2:    {riscp(mmip,smip);break;}
            }
            break;
        }
        case 3:
        {
            printf("SUBMENU:\n");
            printf("1. Series Indutance\n2. Parallel Inductance\n");
            printf("Please enter the preferred option:\n");
            scanf("%d",&smip);
            switch(smip)
            {
                case 1:    {riscp(mmip,smip);break;}
                
                case 2:    {ripcs(mmip,smip);break;}
            }
            break;
        }
        case 4:
        {
            printf("SUBMENU:\n");
            printf("1. Series Impedance\n2. Parallel Impedance\n");
            printf("Please enter the preferred option:\n");
            scanf("%d",&smip);
            switch(smip)
            {
                case 1:    {RLCS();break;}
                
                case 2:    {RLCP();break;}
            }
            break;
        }
        case 5:
        {
            resfreq();
            break;
        }
        case 6:
        {
            printf("\nThanks for using the application\nHope to see you soon, byeee!\n");
            exit(0);
        }
        default:
        {
            printf("Oops! You have entered an invalid choice, Kindly try again !!");
            break;;
        }
        
    }

    return 0;
}
