#include<stdio.h>
int main()
{
	int i,n,a,sum;
	float avr;

	scanf("%d",&n);
	
	sum = 0, avr = 0;

	for(i=1;i<=n;i++){
		scanf("%d",&a);
		sum = sum  + a;
		avr = sum; 
}

avr=avr/n;
printf("Sum: %d\n",sum);
printf("Avg: %.2f\n",avr);

return 0;






}
