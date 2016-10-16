#include<stdio.h>

int main()
{
float fst,scd,max;
int i;
printf("Enter your three floating numbers:\n");
scanf("%f",&fst);
max=fst;
i=1;
while(i<3){
scanf("%f",&scd);
if(scd>max)max=scd;
i++;
}
printf("max: %.3f\n",max);


return 0;
}

