#include <stdio.h>

int main()
{

        float a[64] = {0}, n, s;
        int br, i, c, poop;
        s = 0;
        i = 0;
        br = 0;
        while(scanf("%f", &n) != EOF)
        {

          a[i] = n;
          poop = 1;
          for(c = 0 ; c < i; c++)
          {
            if(a[c] == a[i])
            {
                poop = 0;
            }
          }
          if(poop)
          {
            i++;
          }
        }
        printf("%d\n", i);

	while(br < i)
        {
          if (a[br] >= i)
          {
            while(a[br] >= i )
            {
              a[br] = a[br] - i;
            }
          }
          s = s + a[br];
          br++;
        }
        printf("%.3f\n", s);
        return 0;
}

