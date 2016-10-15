#include <stdio.h>


void main()
{

  float k,l,p,mit,lol,high ;
printf("Insert number 1:");
scanf("%f",&k );
printf("Insert number 2:");
scanf("%f",&l );
printf("Insert number 3:");
scanf("%f",&p );

 if (k>l) {
      mit=k;
      lol=l;
   } else {
      mit=l;
      lol=k;
   }
   if (mit>p) {
      high=mit;
      if(lol>p){
         mit=lol;
         lol=p;
      }else {
         mit=p;
      }
   }else high=p;
   printf("%.1f", high);
}
