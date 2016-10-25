#include <stdio.h>


int main() {
	float avg ,sum;
	int count,number;
	scanf("%d",&number);
	sum = 0;
	for (count = 0; number != 0; count++) {
		sum = sum + number%10;
		number = number/10;
	}
	avg = sum/count;
	if ( avg >= 7 ){
		printf("heavy");
	}else printf("light");
	return 0;
}

	
