#include<stdio.h>
int main(){
float num1,num2;
printf("Dai 3 numbers\n");
scanf("%f", &num1);
scanf("%f", &num2);
if(num1<num2)
num1=num2;
scanf("%f", &num2);
if(num1<num2)
num1=num2;
printf("\n%.1f\n", num1);
return 0;}
