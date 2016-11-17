#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d", &n);
    int a[n];
    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for (k=n-1; k>=0; k--){
        printf("%d\n", a[k]);
    }
    return 0;
}
