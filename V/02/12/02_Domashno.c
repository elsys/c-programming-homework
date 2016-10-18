#include <stdio.h>
 
 int main()
 {
 float a,b,c,max;
 scanf("%f",&a);
 scanf("%f",&b);
 scanf("%f",&c);
  if(a>b){
     if(a>c){
      max=a;
     }
 }
 if(b>a){
     if(b>c){
         max=b;
     }
 }
 if(c>a){
     if(c>b){
         max=c;
     }
 }
  printf("%f", max);
 }

