#include<stdio.h>
int main(){
	int i,i2,number,price,k,total,price2,discount=100;
	scanf("%d",&number);
	scanf("%d",&price);
	scanf("%d",&k);
	for(i=0;i<k;i++){
	total=total+price;
	}
	number=number-k;
	while(number!=0){
		discount=discount-2;
		price2=price*discount/100;
		for(i2=0;i2<k;i2++){
			total=total+price2;
		}
		number=number-k;
	}
	printf("%d\n",total);


	
}
