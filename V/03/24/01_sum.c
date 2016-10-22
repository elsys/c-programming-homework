#include<stdio.h>
int main(){
	int n,sum,i,a;
	float avr,avr1,avr2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
  		scanf("%d",&a);
		sum=sum+a;
	}
	avr=sum/n;
        printf("Sum: %d\n",sum);
	if(avr==0){
		sum=sum*10;
		avr1=sum/n;
		avr2=sum%n;
		avr=avr1+avr2;
		avr=avr/10;
	}
	printf("Avg: %.2f\n",avr);



}
