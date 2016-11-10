#include<stdio.h>
 int main(){
 int n,a,i,sum;
 float avr;
 scanf("%d", &n);
 scanf("%d", &a);
 sum=a;
 i=1;
 do{scanf("%d", &a);
    sum=sum+a;
    i++;}while(i<n);
 avr=(float)sum/n;
 printf("\nSum: %d", sum);
 printf("\nAvg: %.2f", avr);
 return 0; }
