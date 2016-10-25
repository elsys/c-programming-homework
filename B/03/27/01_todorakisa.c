#include <stdio.h>
int main()
{
int n,a,j;
int sum=0;
float avg;
scanf("%d",&n);
for(j=0;j<n;j++){
scanf("%d",&a);
sum=sum+a;
}
avg=(float)sum/n;
printf("Sum: %d\nAvg: %.2f",sum,avg);
return 0;
}
