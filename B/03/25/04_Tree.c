#include<stdio.h>

int main()
{
	int height, brr=0, brr2, inter, str=1, ht=0;
	scanf("%d", &height);
	inter=height-1;
	if(height>2)
	{
		brr2=1;
		ht=1;
		for(brr=1;brr<height-2;brr++)
		{
			brr2+=2;
			ht+=brr2;
		}
	}
	printf("%d\n", ht);
	for(brr=0;brr<height;brr++)
	{
		for(brr2=0;brr2<inter;brr2++)
		{
			printf(" ");
		}
		for(brr2=0;brr2<str;brr2++)
		{
			if(brr2==0||brr2==str-1||brr==height-1)
			{
				printf("*");
			}
			else if(brr!=height-1)
			{
				printf("#");
			}
		}
		inter--;
		str+=2;
		if(brr+1<height)printf("\n");
	}
	return 0;
}
