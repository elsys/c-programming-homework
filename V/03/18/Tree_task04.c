#include<stdio.h>
 
int main()
{
	int i, space, rows, star=0,q=0;
	scanf("%d",&rows);
	for(i = 1; i < rows; i++)
        {
                while(star != (2*i - 1))
                {
                        if(star==0 || star==2*i-2)
                                q=q;
                        else
                                q++;
                        star++;
                }
	        star=0;
        }
	printf("\n%d",q);
	printf("\n");
	for(i = 1; i < rows; i++)
        {
                for(space = 1; space <= rows-i; space++)
                {
                        printf(" ");
                }
                while(star != (2*i - 1))
                {
                        if(star==0 || star==2*i-2)
                                printf("*");
                        else
                                printf("#");
                        star++;
                }
                star=0;
                printf("\n");
        }
        for(i=0; i<2*rows-1; i++)
        {
                printf("*");
        }

}
