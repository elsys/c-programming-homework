#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,m,k,a,i,b;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);
i=0;
b=0;
while(i<n){
        a=i/k*(2*m/100);
        b=b+(m-a);
        i++;
}
printf("%d\n",b);
}

