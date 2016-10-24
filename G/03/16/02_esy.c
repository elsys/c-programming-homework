#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bigN,i=0,sumd=0;
    float dels;
    scanf("%d",&bigN);
    while(bigN>0){
        dels=bigN%10;
        sumd=sumd+dels;
        i++;
        bigN=bigN/10;
    }
    dels=(float)sumd/i;
    if(dels>7.0){printf("\nheavy");}else{ printf("\nlight");}
    return 0;
}
