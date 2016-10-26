#include <stdio.h>

int main()
{

	int n,b,i;
	float avg=0;

	do
	{
	scanf("%d",&n);
	}
	while(n<1 && n>9999);

	for(i=0;n>0;n=n/10)
	{
		b=n%10;
		avg=avg+b;
		i++;
	}
	avg=avg/i;

	if(avg>7)
		printf("heavy");
	else
		printf("light");

return 0;
}
