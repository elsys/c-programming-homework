#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fl,big;
    scanf("%f",&fl);
    big=fl;
    scanf("\n%f",&fl);
    if(big<fl)big=fl;
    scanf("\n%f",&fl);
    if(big<fl)big=fl;
    printf("%f.1",big);
    return 0;
}
