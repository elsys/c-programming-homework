#include<stdio.h>

int main(){
	int n,i=0,s=1,a=1,b=0,c=0,d=0,e,h=0;
	scanf("%d",&n);
	h=(n-2)*(n-2);
	printf("%d\n",h);
	while(n>s){
		while(n-s>i){
			printf(" ");
			i++;
			if(s==1)d++;
		}
		printf("*");
		while(s!=1 && b<a){
			printf("#");
			b++;
		}
		if(s!=1){printf("*");a=a+2;};
		s++;
		i=0;
		b=0;
		printf("\n");
	}
	e=2*d+1;
	while(e>c){
		printf("*");
		c++;
	}
}
