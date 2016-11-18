#include<stdio.h>
int main()
{
int i,c,n,z[100];
scanf("%d",&n);
for (i=0;i<n;i++)
{
scanf("%d",&z[i]);
}
for(c=n-1;c>=0;c--)
{
printf("%d\n",z[c]);
}
return 0;
}
