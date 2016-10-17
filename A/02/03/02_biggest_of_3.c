#include <stdio.h>

int main () {
	int i;
	float number, max;

	for (i = 0; i <= 2; i++) {
		scanf("%.1f", &number);
		
		if (i == 0)
			max = number;
		if (number > max) {
			max = number;
		}
	}

	printf("%.2f\n", max);
}
