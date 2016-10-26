#include <stdio.h>

int main() {
	float number,sum;
	float avg;
	int n;
	scanf("%d",&n);
	int i;
	sum = 0;
	for (i = 1; i <= n; i++) {
		scanf("%f",&number);
		sum = sum + number;
	}
	avg = sum/n;
	printf("Sum: %.0f\nAvg: %.2f",sum , avg);
	return 0;
}			
		
		
		
		
