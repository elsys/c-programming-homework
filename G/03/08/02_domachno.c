#include<stdio.h>
 int main(){
 int a,sum,d;
 float avr;
 scanf("%d", &a);
 sum=0;
 do{ d=a%10;
     sum=sum+d;
     avr++;
     a=a/10;}while(a!=0);
 avr=(float)sum/avr;
 if(avr>7) printf("heavy");
 else printf("light");
 return 0;
 }
