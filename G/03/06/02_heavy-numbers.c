#include<stdio.h>
#include<stdlib.h>

int main (){
  int a, avr, i, b;
  scanf("%d", &a);
avr=0;
  for (i = 0; a!=0; i++){
    b=a%10;
    avr=avr+b;
    a=a/10;
  }
  avr=avr/i;
 if(avr < 7){
    printf("light\n");}
 else {
    printf("heavy\n");}
  return 0;
}

