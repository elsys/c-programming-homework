#include <stdio.h>
int main()
{
int r,p,k,m,c,v;
k=0;
scanf("%d",&n);
for(c=1;c<=m-2;c++)
{
k=k+i*2-1;
}
printf("%d\n",k);
for(c=1;c<=m;c++)
{
for(v=0;v<m-i;v++)
{
printf(" ");
}
if(c==m)
{
for(r=1;r<=m+m-1;r++)
{
printf("*");
}
continue;
}
printf("*");
if(c>=2)
{
for(p=2;p<i*2-1;p++)
{
printf("#");
}
printf("*");
}
printf("\n");
}
return 0;
}

