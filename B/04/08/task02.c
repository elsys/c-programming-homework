#include <stdio.h>
int main()
{
 int n,i=0,a,b;
 scanf("%d",&n);
 int ar1[n];
do{
 scanf("%d",&ar1[i]);
 if(ar1[i]%2)i++; 
}while(i<n);
a=i-1;
i=0;
while(i<a)
{
 if(ar1[i]%2!=0)
   {
    if(ar1[a]%2!=0)
      {
       b=ar1[i]-ar1[a];
       printf("%d\n",b);
      }
   }
i++;
a--;
}
if(n%2!=0)
{
printf("%d",ar1[n%2]);
} 
} 
