#include <stdio.h>
int main()
{
	int num,sum=0,j=0;

	do{
	scanf("%d",&num);
	}while(num<=0 || num>=10000);

	while(num!=0){
	sum=sum+num%10;
	num=num/10;
	j++;
	}

	if(sum/j>7){
	printf("heavy");
	}
	else{
	printf("light");
	}

	return 0;
}
