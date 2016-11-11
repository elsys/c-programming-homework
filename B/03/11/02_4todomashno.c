#include <stdio.h>
int main()
{ 
 int n=0,sum=0,a=0,i=0;
 float avr=0;
 do{scanf("%d",&n);}
 while(n<1 || n>9999);
 while(n>0)
 {
   a=n%10;
   sum=sum+a;
   n=n/10;
   ++i;
 }
 avr=(float) sum/i;
 //printf("\n%f",avr);

if (avr>7)printf("heavy");
 else printf("light");
 



 return 0;
}
