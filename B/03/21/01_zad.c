# include <stdio.h>
int main ()
{	int sum=0,i,a;
	float n;
  	scanf("%f",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum = sum+a;
	}
printf("Sum:%d\n",sum);
printf("Avg:%.2f\n",sum/n);
return 0;
}
