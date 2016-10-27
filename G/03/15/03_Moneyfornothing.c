#include <stdio.h>

    int main () {
        int n,m,k,suma,i;
        scanf("%d", &n);
        scanf("%d", &m);
        scanf("%d", &k);
        suma=0;
        for (i=0; i<n; i++)
        {
            suma=suma+m-(i/k*(2*m/100));
        }
        printf("\n%d", suma);

        return 0;
        }
