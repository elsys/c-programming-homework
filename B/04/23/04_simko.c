#include <stdio.h>
int main()
{
float a[100000],t=0,h=0;
int i,j,p,f=0;
for(i=0; scanf("%f",&a[i])!=EOF;i++);
f=i;
for(j=0;j<i-1;j++)
{
for(p=j+1;p<i;p++)
{
if(a[j]==a[p])
{
f--;
break;
}
}
}
printf("%d\n",f);
for(j=0;j<i-1;j++)
{
for(p=j+1;p<i;p++)
{
if(a[j]==a[p])
{
h=h+a[j]-f*(int)(a[j]/f);
break;
}
}
}
for(j=0;j<i;j++)
{
t=t+a[j]-f*(int)(a[j]/f);
}
printf("%.3f",t-h);
return 0;
}


