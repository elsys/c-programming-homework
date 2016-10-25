#include<stdio.h>
int main()
{
int n, a, i;
float avg, sum;
sum=0;
 scanf("%d", &n);
 for(i=0; i<n; i++)
{
scanf("%d", &a);
sum=sum+a;
}
avg= sum/n;
printf("Sum: %.0f", sum);
printf("\nAvg: %.2f", avg);
return 0;


}
