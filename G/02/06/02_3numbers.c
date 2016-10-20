#include <stdio.h>
#include <stdlib.h>
int main(){
float number1,number2,number3,max;
scanf("%f",&number1);
scanf("%f",&number2);
scanf("%f",&number3);
if(number1<number2){
max=number2;}else{max=number1;}
if(max<number3){
max=number3;}
printf("%.1f\n",max);
return 0;
}


