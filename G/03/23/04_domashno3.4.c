#include <stdio.h>
int main()
{
int n,a=1,j,k,n1,i,v=1,sum=0;
scanf("%d", &n);
for(i=2;i<n;i++){
sum=sum+a;
a+=2;}
printf("%d\n", sum);
n1=n;
for(i=0;i<n-1;i++){
for(j=0;j<n1-2;j++)
printf(" ");
if(i==0){
printf(" *\n");
continue;
}
n1--;
printf("*");
for(k=1;k<=v;k++)
printf("#");
v+=2;
printf("*");
printf("\n");
}
if(n>1)
for(i=0;i<=v+1;i++)
printf("*");
return 0;
}
