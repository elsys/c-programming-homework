
#include <stdio.h>
#include <stdlib.h>

int main()
{
   
    int n,i,num,b,last;
    b = 0;
    i = 0;
    scanf("%d",&n);
    int chisla[n];
    while( i < n)
    {
        scanf("%d",&num);
        if(num % 2 != 0)
        {
        chisla[i] = num;
        i++;
        }
    }
    if(n % 2 == 0)
       last = n/2;
     else
       last = (n/2) + 1;

    while(last>0)
    {
       num = chisla[0 + b] - chisla[i - 1];
       b++;
       if (num == 0)
       {
           printf("\n%d",chisla[(n/2)]);
           break;
       }
       else printf("\n%d",num);
       i--;
        last--;
    }
    return 0;
}

