#include <stdio.h>

int main(){
	int quantity, i=1;
	float percentage, price;

	scanf("%d", &quantity);
	scanf("%f", &price);
	scanf("%f", &percentage);

	percentage=(percentage/100)*price;

	float total=0;

	do{
		total=total+price;
		i++;
		if(i%2==0){
			price=price-percentage;
		}
	}while(i<=quantity);

	printf("%.2f", total);

return 0;
}
