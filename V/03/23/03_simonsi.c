#include <stdio.h>
int main() {
    int n, m, k, y, i, price, total;
    float  uvelichenie=0.02f;
    float namalenie=0.0f;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    total=0;
    y=k;
    for(i=0;i<n;i++) {
        if(i==k) {
            namalenie=namalenie+uvelichenie;
            k=k+y;
        }
        price=m-(namalenie*m);
        total=total+price;
    }
    printf("%d\n",total);
    return 0;
}
