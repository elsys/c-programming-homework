#include<stdio.h>
int main(){
	int n,i=0;
	float average;
	scanf("%d",&n);
	while(n!=0){
		average=average+n%10;
		n=n/10;
		i++;
	}
	average=average/i;
	if(average>7){
		printf("heavy\n");
	}
	if(average<=7){
		printf("light\n");
	}
	return 0;
}
