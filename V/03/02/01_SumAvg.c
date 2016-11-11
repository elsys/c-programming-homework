#include <stdio.h>

int main() {

	int num;
	scanf("%d", &num);

	int nmb;
	float sum=0;

	for(int i=1;i<=num;i++){
		scanf("%d", &nmb);
		sum=sum+nmb;
	}

	float avg;
	avg=sum/num;

	printf("Sum: %.f\n Avg: %.2f", sum, avg);
return 0;
}
