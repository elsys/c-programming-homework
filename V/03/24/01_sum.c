#include<stdio.h>
int main(){
	int n,sum,i,a,avr;
	scanf("%d",&n);
	for(i=0;i<n;i++){
  		scanf("%d",&a);
		sum=sum+a;
	}
        printf("Sum: %d",sum);
	printf("\nAvg: %.2f",(float)(sum/n));
	return 0;



}
