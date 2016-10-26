#include<stdio.h>
int main()
{
float number,mx=0;
int j=0;
while(j<3)
{
scanf("%f",&number);
j++;
if(mx<number){mx=number;}
}
printf("\n%.1f",mx);
return 0;
}
