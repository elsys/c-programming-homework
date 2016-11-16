#include<stdio.h>

int main(){
    int n, m[1000];
    scanf("%d", &n);
    for(int i = 0 ; i < n ; scanf("%d", &m[i]), m[i] % 2 != 0 ? i++ : i);
    for(int i = 0 ; i < n/2 ; i++){
        if(i != n-i) printf("%d\n", m[i] - m[(n - 1) - i]);
    }
    if(n % 2 != 0) printf("%d\n", m[n / 2]);
    return 0;
}

