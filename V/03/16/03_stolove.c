#include <stdio.h>
#include <stdlib.h>

int main()
{
    float z,a,otstnastol;
    int broi,mny,sum,i;
    int b[234],Kcena[234];
    scanf("%d/n",&broi);
    scanf("%d/n",&mny);
    scanf("%f/n",&otstnastol);
    a = broi/otstnastol;
    i=0;
    sum=0;
    z = mny*0.02;
    while(a>0)
    {

        b[i]=mny;
        Kcena[i]= otstnastol*b[i];
        sum+=Kcena[i];
        mny = mny - z;
        i++;
        a--;
    }

    printf("%d",sum);
    return 0;
}
