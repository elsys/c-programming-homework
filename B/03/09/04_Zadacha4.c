#include <stdio.h>

int main()
{
int n, k, v, h;
scanf("%d", &n);
printf("%d\n", (n-2)*(n-2));
for(v=1; v<=n; v++)
{
for(h=1; h<=n-v; h++)printf(" ");
printf("*");
if(v>=2)
{
if(v==n)for(k=0; k!=2*v-3; k++)printf("*");
else if(v>=2)for(k=0; k!=2*v-3; k++)printf("#");
printf("*");
}
printf("\n");
}
return 0;
}
