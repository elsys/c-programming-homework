#include <stdio.h>

int main(){
    int n, odds[100];
    int i;
    scanf("%d", &n);
    for(i = 0 ; i < n ; ){
        scanf("%d", &odds[i]);
        if(odds[i] % 2 != 0){
            i++;
        }
    }
    for(i = 0 ; i < n/2 ; i ++){
        printf("%d\n", odds[i] - odds[n - i - 1]);
    }
    if(n % 2 != 0){
        printf("%d\n", odds[n/2]);
    }
    return 0;
}
