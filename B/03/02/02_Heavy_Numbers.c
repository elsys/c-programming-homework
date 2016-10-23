#include <stdio.h>

int main()
{
	int a, counter = 0;
	float avg;
	scanf("%d",&a);
	
	avg = 0;
	for(;a > 0;a /= 10)
	{
		avg = avg + (a % 10);
		counter++;
	}
	avg /= counter;
	
	if(avg < 7) printf("light");
	else printf("heavy");
	
	return 0;
}

