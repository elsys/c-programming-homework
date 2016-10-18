#include <stdio.h>
 
 int main()
 {
 float a,b,c;
 scanf("%f",&a);
 scanf("%f",&b);
 scanf("%f",&c);
  if(a>b){
     if(a>c){
      printf("%.1f", a);
     }
 }
 if(b>a){
     if(b>c){
         printf("%.1f", b);
     }
 }
 if(c>a){
     if(c>b){
         printf("%.1f", c);
     }
 }
  return 0;
 }

