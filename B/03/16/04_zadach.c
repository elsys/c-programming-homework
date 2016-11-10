#include <stdio.h>

int main()
{
	int n, i, f, k, half, count, dies ;
        f = 1;
        scanf("%d", &n);
        half = n - 1;
        count = 0;
        dies = 1;
        i = 0;
        do{
                count = count + dies;
                i++;
                dies = dies + 2;
        }while(i < n - 2);
	printf("%d\n", count);
	for (i = 1; i < n; i++)
	{
		for (k = 1; k <= half; k++)
		{ printf(" ");}
		for (k = 1; k <= f; k ++)
		{
			 
			if (k == 1 || k == f)
			{
				printf("*");
			} 
			else
			{
				printf("#");
			}
		}
		printf("\n");
		f += 2;
		half -= 1;
	}
	for (i = 1; i <= f; i++)
	{
		printf("*");
	}
}
