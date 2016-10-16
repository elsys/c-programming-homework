#include <stdio.h>
int main(){
	float a,b,c;
	printf("Input 3 numbers");
	printf("\n Input first number:");
	scanf("%f", &a);
	printf("\n Input second number:");
	scanf("%f", &b);
	printf("\n Input final number:");
	scanf("%f", &c);
	if(a>b && a>c){
	printf("%.1f\n",a);
	}
	else if(b>a && b>c){
	printf("%.1f\n", b);
	}
	else if(c>a && c>b){
	printf("The biggest number is:%.1f\n", c);
	}
return 0;
}
		
