#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,broi;
    float suma,chislo,avr;
    suma=0;
    scanf("%d",&broi);
        for(i=0;i<broi;i++){
            scanf("%f",&chislo);
            suma=suma+chislo;
        }

    avr=suma/broi;

    printf("Sum: %.0f\n", suma);
    printf("Avr: %.2f\n", avr);
    return 0;
}

