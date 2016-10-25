#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,m,k,q,i=0;
float sum=0;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);

while(i < n){
        q= i / k * ( 2 * m / 100);
        sum = sum + ( m - q);
        i++;
}
printf("%.0f\n",sum);
}
