#include <stdio.h>
int main()
{
        int n, p, x, y;
        n = 0;
        p = 0;
        scanf("%d", &x);
        for(y = 1; y < x - 1; y++)
        {
        while(p < y * 2 - 1)
        {
          p++;
          n++;
        }
        }
        printf("%d\n", n);
        for(p = 0; p < x - 1; p++)
        {
          printf(" ");
        }
        printf("*");
        for(p = 0; y < x - 1; p++)
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

