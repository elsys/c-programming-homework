#include <stdio.h>
int main()
{   
int m,i;
float avr;
scanf("%d", &m);
avr=0;
i=0;
do{
i++;
avr=avr+m%10;
m=m/10;
}while(m>0);
avr=(float)avr/i;
if(avr>7){
printf("heavy");
}
else{
printf("light");
}
return 0;
}
