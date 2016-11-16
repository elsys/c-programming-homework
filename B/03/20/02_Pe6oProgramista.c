#include<stdio.h>
int main()
{
	int n,i=0,avg=0;
	scanf("%d",&n);
	do{
		avg+=n%10;
		n/=10;
		i++;
	}while(n!=0);
	avg/=i;
	if(avg<=7) printf("light \n");
	else printf("heavy \n");
}
