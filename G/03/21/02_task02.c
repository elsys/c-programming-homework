#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,i=0,b,c,d,e,f=0,g;
do{
scanf("%d", &a);
}while(a<0&&a>10000);
while (a>0)
{
b=a%10;
a=a/10;i++;
c=a%10;
a=a/10;i++;
d=a%10;
a=a/10;i++;
e=a%10;
a=a/10;i++;
}
f=b+c+d+e;
g=f/i;
if(g>7) printf("\n heavy");
if(g<7) printf("\n light");
return 0;
}
