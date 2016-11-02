#include <stdio.h>
#include <stdlib.h>
int main()
{
float sredno=0;
int i=0,n;
scanf("%d",&n);
while(n!=0){
sredno=sredno+n%10;
n=n/10;
n=n+1;
}
sredno=sredno/i;
if (sredno<7) printf("light");
if (sredno>7) printf("heavy");
return 0;
}
