#include<stdio.h>
int main(){
    int n, m, k, i;
    float discount=0.0, price = 0.0;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    while(n!=0){
        for(i=0; i<k; i++){
            price += ((100-discount)/100)*m;
            n--;
        }
        discount += 2;
    }
    printf("%.0f", price);
    return 0;
}
