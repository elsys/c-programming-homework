#include<stdio.h>
int main(){

	int vhod, sum=0, brr, poredno;
	float avr=0;
	scanf("%d", &vhod);
	for(brr=0;brr<vhod;brr++){
		scanf("%d", &poredno);
		sum+=poredno;
		avr=sum;
	}

	printf("Sum: %d\nAvg: %.2f", sum, avr/vhod);

	return 0;
}
