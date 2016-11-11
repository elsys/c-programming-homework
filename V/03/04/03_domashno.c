#include <stdio.h>

int main()
{
int n, count;
float avg;
scanf("%d", &n);
for(count=0;n>0;count++)
{
avg=avg+n%10;
n=n/10;
}

avg=avg/count;

if(avg<7)
printf("light");
else
printf("heavy");
return 0;
}
