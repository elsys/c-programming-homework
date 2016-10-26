#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,numi;
    scanf("\n%d",&num);
    numi=num*num;
    printf("\n%d",numi);
    numi=numi*num;
    printf("\n%d",numi);
    return 0;
}
