#include<stdio.h>
int main()
{
int n, i, red, x=0, spaces;
scanf("%d", &n);
x=(n-2)*(n-2);
printf("%d \n",x);
for(red=1; red<n; red++)
         {
spaces = n-red;
for(i=0; i<spaces; i++)
{
printf(" ");
}
if(red==1)
{
printf("*");
printf("\n");
}
else {
printf("*");
printf("#");
for(i=2; i<red; i++)
{
printf("#");
printf("#");
}
printf("*");
printf("\n");
     }
         }
for(i=0; i<(n*2)-1; i++)
printf("*");


return 0;
}
