#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q;
    char a,i,e;
    i='a';
    e='z';
    q=0;
    scanf("%c",&a);
    while(i<a)
    {
      i=i+1;
      q=q+1;
    };
    e=e-q;
    printf("%c",e);
    return 0;
}
