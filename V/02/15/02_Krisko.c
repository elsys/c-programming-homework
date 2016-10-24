#include <stdio.h>
int main()
{
 
float k,l,p,mit,lol,high;
scanf("%f",&k );
scanf("%f",&l );
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
