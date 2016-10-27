#include <stdio.h>
int main ()
{
int n,r,l;
float j,k;
do 
{
scanf("%d", &n);
}
while (n<1 || n>9999);
l=0;
for (j=0;n>0;n=n/10)
{
r=n%10;
l++;
j=j+r;
}
k=j/l;
if (k<7) printf("light\n");
if (k>7) printf("heavy\n");
return 0;
} 
