#include<stdio.h>
int main(){
	int i=0,i2=1,space,red,posl=0,hashtag=1;
	scanf("%d",&red);
	while(i<red-2){
		hashtag=hashtag+i2;
		i++;
		i2=i2+2;
	}
	hashtag--;
	printf("%d",hashtag);
	hashtag=1;
	i=0;
	while(i<red){
		posl=posl+2;
		i++;
	}
	posl--;
	space=posl/2-1;
	printf("\n");
	for(i=-1;i<space;i++){
		printf(" ");
	}
	printf("*");
	space--;
	while(space!=-1){
		printf("\n");
		for(i=-1;i<space;i++){
			printf(" ");
		}
		printf("*");
		for(i=0;i<hashtag;i++){
			printf("#");
		}
		hashtag=hashtag+2;
		printf("*");
		space--;
	}
	printf("\n");
	for(i=0;i<posl;i++){
		printf("*");
	}	
}
