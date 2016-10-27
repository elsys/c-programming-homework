#include <stdio.h>
#include <stdlib.h>
int main () {
int n,kj,i;
float average;
scanf("%d", &n);
kj=0;
i=0;
do
        {
            kj=kj+n%10;
            n=n/10;
            i=i+1;
        } while(n>0);
average=kj/i;
if(average<7)
{
printf("\n light");
}
else 
{
printf("\n heavy");
}
  return 0;
}





