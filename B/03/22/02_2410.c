#include<stdio.h>
int main()
{
int n, i;
float avg, sum;
scanf("%d", &n);
sum=0;
i=0;
do
{
sum=sum+n%10;
n=n/10;
i++;
}
while(n/10!=0);
avg = sum/i;
if(avg<7)
{
printf("light");
}
else printf("heavy");
return 0;
}

