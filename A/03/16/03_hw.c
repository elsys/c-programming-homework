#include <stdio.h>

int main() {
    float n, m, k, i=0, j=0, q=0, sum=0;
    
    scanf("%f", &n);
    scanf("%f", &m);
    scanf("%f", &k);
    
    while(i<=n){
        while(j<k){
            sum=sum + m*(100-q)/100;
            j++;
        }
        q=q+2;
        i=i+j+1;
        j=0;
    }
    
    printf("%.0f", sum);
    return 0;
}
