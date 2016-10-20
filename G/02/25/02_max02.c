#include<stdio.h>
int main()
{
float a,max=0;
int i=0;
while(i<3)
{
scanf("%f",&a);
i++;
if(max<a){max=a;}
}
printf("\n%.1f",max);
return 0;
}
