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

    avr=suma/broi;

    printf("Sum: %d\n", suma);
    printf("Avg: %.2f\n", avr);
    return 0;
}

