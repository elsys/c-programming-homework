#include <stdio.h>
int main()
{
int n,i,m;
float Avg,Sum;
Sum=0;
i=1;
scanf("%d",&n);
do{
scanf("%d",&m);
Sum=Sum+m;
i++;
}while(i<=n);
printf("Sum: %.0f\n",Sum);
Avg=Sum/n;
printf("Avg: %.2f\n",Avg);
return 0;
}
