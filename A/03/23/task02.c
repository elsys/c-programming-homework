#include <stdio.h>

int main(){
	int n,s=0,a,i=0;
	scanf("%d",&n);
	do{
		a=n%10;
		s=s+a;
		n=n/10;
		i++;
	}while(n!=0);
	s=s/i;
	if(s>7){printf("heavy");}else{printf("light");}
}
