#include <stdio.h>
int main()
{
	int n,a,i,sum=0;
	float avg;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a);
	sum=sum+a;
	}
	avg=(float)sum/n;
	printf("Sum: %d\nAvg: %.2f",sum,avg);
	
	return 0;
}
