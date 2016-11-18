#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n],i=0,c=1;
for (i=0;i<n;)
{
scanf("%d",&a[i]);
if(a[i]%2!=0)
{
i++;
}
}
for(i=0;i<n/2;i++,c++)
{
printf("%d\n",a[i]-a[n-c]);
}
if(n%2!=0)
{
printf("%d\n",a[n/2]);
}
return 0;
}
