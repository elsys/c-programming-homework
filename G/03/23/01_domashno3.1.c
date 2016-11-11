#include<stdio.h>
int main()
{
int n,b,sum=0;
float a;
do{
scanf("%d", &n);}while(n<1);
for(int i=0;i<n;i++){
scanf("%d", &b);
sum=sum+b;}
printf("Sum: %d\n", sum);
a=(float)sum/n;
printf("Avg: %.2f", a);
return 0;
}
