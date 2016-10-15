#include<stdio.h>
int main()
{
float f1,f2,f3;
printf("\nInput Float Number 1:");
scanf("%f",&f1);
printf("\nInput Float Number 2:");
scanf("%f",&f2);
printf("\nInput Float Number 3:");
scanf("%f",&f3);
if(f1>f2 && f1>f3)
printf("Biggest Number:%.5f\n",f1);
else if(f2>f1 && f2>f3)
printf("Biggest Number:%.5f\n",f2);
else if(f3>f1 && f3>f2)
printf("Biggest Number:%.5f\n",f3);
else if(f2==f3==f1)
printf("Biggest Number %.5f\n",f1);
return 0;
}

