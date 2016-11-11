#include <stdio.h>

int main(){
	int i=0,n,a,sum=0;
	float avg;
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&a);
		sum=sum+a;
		i++; 
	}
	printf("Sum: %d\n", sum);
	avg=(float)sum/n;
	printf("Avg: %.2f", avg);
}
