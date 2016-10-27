#include <stdio.h>

int main(){
    int n; 
    int m; 
    int k; 

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);

    float discount = 0.0;
    int total = 0, b = k;

    for(int i = 0; i < n; i++){
        if(i == k){
            discount += 0.02;
            k += b;
        }

        total += m - (discount * m);

    }
    
    printf("%d\n", total);

    return 0;
}
