#include <stdio.h>
int main(){ 
	int a; 
	float sum=0;
	float avg=0;
	int c,br=0;
	scanf("%d", &a); 
		do{
			c=a%10;
			sum=sum+c;
			a=a/10; 
			br++;
	}
		while(a>0);
		avg=sum/br;
	if(avg>7) printf("heavy\n");
	else printf("light");
return 0;}
