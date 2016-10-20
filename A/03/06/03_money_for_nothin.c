#include<stdio.h>

int main(){
    int n, m, k, sum = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    for(int i = 0 ; i < n ; i++) sum += m - (i / k * ( 2 * m / 100));
    printf("%d", sum);
    return 0;
}
