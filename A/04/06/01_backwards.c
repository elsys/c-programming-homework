#include<stdio.h>

int m[1000], n;
int main(){
    scanf("%d", &n);
    for(int i=0 ; i < n ; i++) scanf("%d", &m[i]);

    for(int i = n - 1 ; i >= 0 ; i--)printf("%d\n", m[i]);

    return 0;
}

