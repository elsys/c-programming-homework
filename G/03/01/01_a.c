#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,broi,chislo,suma;
    float avr;
    suma=0;
    scanf("%d",&broi);
        for(i=0;i<broi;i++){
            scanf("%d",&chislo);
            suma=suma+chislo;
        }

    avr=((float)suma)/broi;

    printf("Sum: %.0d\n", suma);
    printf("Avg: %.2f\n", avr);
    return 0;
}
