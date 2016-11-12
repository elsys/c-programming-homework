#include<stdio.h>
int main(){
int n,k,i,h;
scanf("%d",&n);	
h=0;
for(i=1;i<n-1;i++){
for(k=0;k<i*2-1;k++){
	h++;}
  }
	printf("%d\n",h);
	for(k=0;k<n-1;k++){
	printf(" ");}
	printf("*\n");
	for(i=1;i<n-1;i++){
		for(k=n-i-1;k>0;k--){printf(" ");}; 
		printf("*");                      
		for(k=0;k<i*2-1;k++){printf("#");};  
		printf("*");
	   	for(k=n-i-1;k>0;k--){printf(" ");}
		printf("\n");
	}
for(k=0;k<n*2-1;k++){printf("*");};
return 0;
}
