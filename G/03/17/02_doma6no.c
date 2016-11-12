#include <stdio.h>
int main() 
{
int n,i,sum;
float avr;
i=0;
sum=0;
do{
scanf("%d", &n);
}while(n<1 || n>9999);

while(n>0){

sum=sum+n%10;
i++;
n=n/10;
}

avr=(float)sum/i;
if(avr>7)
printf("heavy");
else printf("light");
return 0;
}

