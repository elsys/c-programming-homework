#include <stdio.h>
int main()
{
    char c,opp;
    int n,op,k;
        scanf("%c", &c);
        n=c;
        k=  n - 97;
        op = 122 - k;
        opp = op;
        printf("%c", opp);
return 0;
}
