#include <stdio.h>
#include <stdlib.h>
int main ()
{
   float first,second,third;
   scanf("%f",&first);
   scanf("%f",&second);
   scanf("%f",&third);
   if(first>second && first>third) printf("%.1f", first);
   if(second>first && second>third) printf("%.1f", second);
   if(third>second && third>second) printf("%.1f", third);
   return 0;

}
