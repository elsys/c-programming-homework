#include<stdio.h>
int main(){
int k,o=0,c=0,e;
	do{
	scanf("%d",&k);
	}while(k<=1 && k>=9999);
	do{
	o=o+k%10;
	k=k/10;
	c++;
	}while(c<0);
	e=o/c;
	if(e>=7){
	printf("heavy");
	}else
	{printf("light");}
	
return 0;
}	
