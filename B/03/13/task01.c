#include<stdio.h>

int main()
{
int n,i,num,sum=0;
float avg;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num);
		sum = sum + num;
	 }
	avg = (float)sum/n;
	printf("Sum: %d\nAvg: %.2f",sum,avg);

return 0;
}
