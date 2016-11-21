#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,i=0;
scanf("%d", &n);
int a[n];
do{ scanf("%d", &a[i]);
if (a[i]%2!=0){i++;}
}while (i<n);
for(i=0;i<n/2;i++)
{ printf("%d \n", (a[i]-a[n-i-1]));}
if(n%2!=0) {printf("%d", a[n/2]);}
}
