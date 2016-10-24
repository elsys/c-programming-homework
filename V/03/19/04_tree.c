#include<stdio.h>
 
int main()
{
	int empty = 0, row, k, i = 0, j = 1 , hashes = 1;
	scanf("%d", &row);
	for(i=0; i<row - 2; i++)
	{
		hashes = hashes + j;
		j = j + 2; 
	}
	hashes--;
	printf("%d", hashes);
	hashes = 1;
	for(i = 0; i<row; i++)
	{
                empty = empty + 2;
        }
        empty--;
        k = empty/2 - 1;
        printf("\n");
        for(i = -1; i < k; i++)
        {
                printf(" ");
        }
        printf("*");
        k--;
	while(k!=-1)
	{
		printf("\n");
		for(i = -1; i < k; i++)
		{
			printf(" ");
		}
		printf("*");
		for(i=0; i<hashes; i++)
		{
			printf("#");
		}
		hashes = hashes+2;
		printf("*");
		k--;
	}
	printf("\n");
	for(i = 0; i < empty; i++)
	{
		printf("*");
	}
	return 0;
}
