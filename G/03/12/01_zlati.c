#include <stdio.h> 

int main() {
	int n, i, number;
	int sum = 0;
	float avg;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
     {
		scanf("%d", &number);
		sum = sum + number;
	}
	avg = (float) sum / n;
	printf("Sum: %d\n", sum);
     printf("Avg: %.2f\n", avg);
	return 0;
}
