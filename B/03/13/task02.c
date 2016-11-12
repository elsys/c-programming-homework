#include<stdio.h>

int main()
{

int num,sum=0,i=0;

	do{
	 scanf("%d",&num);
	}while(num<1 || num>9999);

	for(i=0;num!=0;i++){
	 sum = sum +num%10;
	 num = num/10;
	}

	if(sum/i>7){
	 printf("heavy");
	}else{
	 printf("light");
	}
	
	return 0;
}
