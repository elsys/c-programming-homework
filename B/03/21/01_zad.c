# include <stdio.h>
int main ()
{	int n,i,a;
	float sum;
  	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum = sum+a;
	}
printf("Sum: %.0f\n",sum);
printf("Avg: %.2f\n",sum/n);
return 0;
}
