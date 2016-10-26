#include <stdio.h>
#include <stdlib.h>
int main()
{
 int n,m,k,e=0;
 scanf("%d",&n);
 scanf("%d",&m);
 scanf("%d",&k);
for(int s=0;s<n;s++)
e=e+m-(s/k*(2*m/100));
printf("%d\n",e);
return 0;
}      
