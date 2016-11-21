#include <stdio.h>
int main(){

	int c, a, n, sum=0;
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&a);
		sum=sum+a;
	}
	printf("Sum: %d",sum);

	printf("\n Avg: %.2f",(float)sum/n);
	return 0;
}
