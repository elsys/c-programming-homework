#include<stdio.h>
int main(){
	int vhod, brr=0;
	float avr=0;
	scanf("%d", &vhod);
	while(vhod!=0){
		avr=avr+(vhod%10);
		vhod=vhod/10;
		brr++;
	}
	avr=avr/brr;
	if(avr>7)printf("heavy");else printf("light");
	return 0;
}
