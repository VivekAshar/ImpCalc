#include "impedance.h"

char sm[4][12]={"NA","resistance","Capacitance","Indutance"};
char unit[4][6]={"NA","ohms","farad","henry"};
char ss[3][10]={"NA","Series","Parallel"};

int ripcs(int mmip,int smip)
{
 int n;                     /*  number of resistors   */
 float er;                /*  equivalent resistance  */
 int r2;
 int i;                     /*  loop variable        */
 float temp;
 printf("enter number of %ss\n",sm[mmip]);
 scanf("%d",&n);
 printf("enter all %s(unit in %s)\n ",sm[smip],unit[smip]);
 scanf("%f",&er);
 for(i=1;i<n;i++)
 {
     scanf("%d",&r2);
     temp=(1/er)+((1/(float)r2));        /* cast r2 to float  */
     er=(1/temp);
 }
 printf("\nequivalent %s %s = %f\n",ss[smip],sm[mmip],er);
 return 0;
}

int riscp(int mmip,int smip)
{
 int n;                     /*  number of resistors   */
 float er,r2;                /*  equivalent resistance  */
 int i;                     /*  loop variable        */
 printf("enter number of %ss\n",sm[mmip]);
 scanf("%d",&n);
 printf("enter all %s(unit in %s)\n ",sm[smip],unit[smip]);
 scanf("%f",&er);
 for(i=1;i<n;i++)
 {
     scanf("%f",&r2);
     er+=r2;
 }
 printf("\nequivalent %s %s = %f\n",ss[smip],sm[mmip],er);
 return 0;
}