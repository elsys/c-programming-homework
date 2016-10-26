#include <stdio.h>
int main()
{
        int p, x, y, i = 0, br = 0, h = 1;
        p = 0;
        scanf("%d", &x);
        do
        {
          br = br + h;
          i++;
          h = h + 2;
        } while(i < x - 2);
        printf("%d\n",br);
        for(p = 0; p < x - 1; p++)
        {
          printf(" ");
        }
        printf("*");
        for(p = 0; p < x - 1; p++)
        {
          printf(" ");
        }
        printf("\n");
        for(y = 1; y < x - 1; y++)
        {
          for(p = (x - y) - 1; p != 0; p--)
          {
           printf(" ");
          }
          printf("*");
          for(p = 0; p < y * 2 - 1; p++)
          {
            printf("#");
          }
          printf("*");
          for(p = (x - y) - 1; p != 0; p--)
	  {
            printf(" ");
          }
          printf("\n");
        }
        for(p = 0; p < x * 2 - 1; p++) 
	{
	printf("*");
	}
        return 0;
}

