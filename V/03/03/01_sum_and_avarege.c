#include<stdio.h>
int main(){
int n,i=0;
float k,sum=0,avg;
	scanf("%d",&n);
	do{
		scanf("%f",&k);
		sum=sum+k;
		i++;
	}while(i<n);
	avg=sum/n;
	printf("Sum: %.0f",sum);
	printf("\nAvg: %.2f",avg);
return 0;
}	
