 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int chisla[600];
    int n,i;
    i = 0;
    scanf("%d",&n);
    while( i < n)
    {
        scanf("%d",&chisla[i]);
        i++;
    }
    while( i > 0)
    {
        printf("%d\n",chisla[i - 1]);
        i--;
    }
} 
