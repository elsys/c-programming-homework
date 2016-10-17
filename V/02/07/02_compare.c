nclude<stdio.h>
#include<stdlib.h>

int main ()
{

   float first,second,third;

   printf("\n Vuvedi 1-vo chislo:");
   scanf("%f",&first);
   printf("\n Vuvedi 2-ro chislo:");
   scanf("%f",&second);
   printf("\n Vuvedi 3-to chislo:");
   scanf("%f",&third);

   if(first>=second && first>=third) printf("\n nai golqmo e 1-vo chislo!%f", first);

   if(second>=first && second>=third) printf("\n nai golqmo e 2-ro chislo!%f", second);

   if(third>=second && third>=second) printf("\n nai golqmo e 3-to chislo!%f", third);

   return 0;

}
