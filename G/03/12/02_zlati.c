#include <stdio.h>
int main() {
	int n;
	int sum = 0;
	int digit = 0;
	scanf("%d", &n);
	while(n > 0) 
     {
		sum += n % 10;
		n = n / 10;
		digit++;
	}
	if(sum / digit > 7)
     {
		printf("heavy\n");
	}
     else
     {
		printf("light\n");
	}
	return 0;
}
