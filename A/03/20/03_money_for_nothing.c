#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k=0, sum=0, i, b;
    float a=0, discount = 0.02;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);

    b=m;

    for(i=1; i <= n; i++){
        sum = sum + b;

        if(i%k==0) {
            a = m * discount;
            b = b - a;
        }

    }
    printf("%d", sum);
    return 0;
}
