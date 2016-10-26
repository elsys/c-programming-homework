#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,ht,sumht,b,row,k,j;
    scanf("%d",&rows);
    ht = 1;
    sumht = 1;
    k = 1;
    int z;
    z = rows - 2;
    if (rows != 3)
    {
    while(z>1)
	{
		ht = ht + 2;
		sumht = sumht +ht;
		z--;
	
	}
    }
    printf("%d",sumht);
    printf("\n");
    //first row
    b = rows - 1;
    while (b>0)
    {
        printf(" ");
        b--;
    }
    printf("*");
    printf("\n");
    if(rows != 1)
    {
    //mid rows
    for (row = 0; row < rows - 2; row++)
        {
            b = rows - 2 - row;
            while (b>0)
            {
               printf(" ");
               b--;
            }

            printf("*");
            b = row + k;
            j = k;
            k=k+2;
            while (j>0)
            {
                printf("#");
                j--;
            }
            printf("*");
            printf("\n");
        }
    //last row READY
    int i = 0;
    int c = 2;
    while(c > 1)
    {
        c = (rows*2) - (1 + i);

        printf("*");
        i++;
    }
    }
    return 0;
}
