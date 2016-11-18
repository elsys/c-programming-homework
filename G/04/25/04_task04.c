#include <stdio.h>
int main ()
{
int d=0,i,j,c,b=0;
float f,a[64],s=0,e;
scanf("%f",&f);
for(i=0;f!=EOF;i++)
{
for(j=0;j<64;j++)
if(a[j]==f){break;}
else{d++;}
if(d==64){a[b]=f;b++;}
d=0;
}
printf("%d",b);
j=0;
do
{
c=a[j]/b;
e=a[j]-c*b;
s=s+e;
j++;
}while(j<b);
printf("\n%.3f",s);
return 0;
}
