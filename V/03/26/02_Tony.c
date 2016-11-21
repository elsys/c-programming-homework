#include<stdio.h>
int main(){
int a,b=0,c=0,e;
	do
	{
		scanf("%d",&a);
	}while(a<=1 && a>=9999);
	do
	{
	     b=b+a%10;
	     a=a/10;	
	     c++;
	}while(c<0);
	e=b/c;
		if(e>=7)
			{

			printf("heavy");
			}
		else
	{

	printf("light");
	}
	
return 0;
} 
