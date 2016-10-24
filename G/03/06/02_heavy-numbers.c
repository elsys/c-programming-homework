#include <stdio.h>
#include <stdlib.h>
int main(){
int a,i;
float avr;
scanf("%d",&a);
	
while(a>0){
avr=0;
i=0;
a=a/10;
avr+=(a%10);
i=i+1;
}
avr=avr/i;
if(avr<7){
printf("light\n");}
if(avr>7){
printf("heavy\n");}
return 0;
}
