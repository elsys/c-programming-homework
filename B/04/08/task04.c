#include <stdio.h>

int main()
{
float a[100], sumall=0, sumrep=0;
int i, p, k, c=0;

for(i=0; scanf("%f", &a[i]) != EOF; i++);

c=i;

for(p=0; p<i-1; p++)
{
for(k=p+1; k<i; k++)
{
if(a[p] == a[k])
{
c--;
break;
}
}
}

printf("%d\n", c);

for(p=0; p<i-1; p++)
{
for(k=p+1; k<i; k++)
{
if(a[p] == a[k])
{
sumrep= sumrep + a[p] - c * (int)(a[p] / c);
break;
}
}
}

for(p=0; p<i; p++)
{
sumall = sumall + a[p] - c * (int)(a[p] / c);
}

printf("%.3f", sumall - sumrep);

return 0;
}
