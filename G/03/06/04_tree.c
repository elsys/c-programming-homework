#include <stdio.h>
#include <stdlib.h>
int main(){
 int i,a,b,d;

 scanf("%d",&d);
 if(d>1)
 printf("%d\n",(d-2)*(d-2));
 else printf("0\n");
 for(i=0;i<d;i++)
 {
  for(a=d-i;a>0;a--)
  {
   printf(" ");
  }
   printf("*");
   for(b=0;b<(i*2)-1;b++)
   {
    if(i==(d-1))printf("*");
    else printf("#");
   }
   if(i!=0)printf("*");
   printf("\n");
 }

 return 0;
}
