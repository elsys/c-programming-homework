#include<stdio.h>
int main(){
int n,k,red,hashtags=0;//n-broy na redove;k=broy spacove;red counter za redove
scanf("%d",&n);			//hashtags counter sa #
for(red=1;red<n-1;red++){
for(k=0;k<red*2-1;k++){
	hashtags++;}}
	printf("%d\n",hashtags);//tva e za da se printfne borya # predi durvoto
	for(k=0;k<n-1;k++){
	printf(" ");}// purvi red
	printf("*\n");
	for(red=1;red<n-1;red++){
		for(k=n-red-1;k>0;k--){printf(" ");};//taya chast mojeshe da  
		printf("*");                      //e v funkciya ama ne znam kak
		for(k=0;k<red*2-1;k++){printf("#");};  //se pishat funkcii
		printf("*");
	   	for(k=n-red-1;k>0;k--){printf(" ");}
		printf("\n");
	}
for(k=0;k<n*2-1;k++){printf("*");};
return 0;
}

