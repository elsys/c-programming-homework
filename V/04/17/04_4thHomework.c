#include <stdio.h>
#include <math.h>
	
	
int main () {
	float floatNum[1000];
	int count;
	int n;
	float number;
	int isExist = 0;
	int i = 0;
	while (scanf("%f",&number) != EOF){
		
		for(count = 0; count < 64; count++){
		
			if(floatNum[count] == number) {
				isExist = 1;
			}
		}
		if(isExist == 0) {
			floatNum[i] = number; 
			i++;
		}
		isExist = 0;
		
	}

	float sum = 0;		

	for(n = 0; n < i; n++) {
		
		sum = fmod(floatNum[n], i) + sum;
		
	}

	printf("%d\n",i);
	printf("%.3f ", sum);
	
	return 0;
}
