#include <stdio.h>

int main()
{
int num, i, f, space;

scanf("%d",&num);

if(num<0)break;

space = num - 1;

for(i = 1; i <= num ; i++)
{
	for(f = 1; f <= space; f++)
	printf(" ");
		
	space--;

	for(f =1; f <= 2*i-1; f++)
	printf("*");

	printf("\n");
}

space = 1;

for(i = 1; i <= num-1; i++)
{
	for(f = 1; f <= space; f++)
	printf(" ");

	space++;

	for(f = 1; f <= 2*(num-i)-1; f++)
	printf("*");

	printf("\n");
}
	
return 0;
}
