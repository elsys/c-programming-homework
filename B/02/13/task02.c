#include<stdio.h>

int main()
{
  
float fst,scd,max;
int i;
scanf("%f",&fst);
max=fst;
i=1;
while(i<3){
scanf("%f",&scd);
if(scd>max)max=scd;
i++;
}
printf("%.1f",max);


return 0;
}

