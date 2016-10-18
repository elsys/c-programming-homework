#include <stdio.h>

int main () {
	int i;
	float number, max;

	for (i = 0; i <= 2; i++) {
		scanf("%f", &number);
		
		if (i == 0)
			max = number;
		if (number > max) {
			max = number;
		}
	}

	printf("%.1f\n", max);
}
