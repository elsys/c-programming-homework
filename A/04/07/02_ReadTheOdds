#include<stdio.h>
int main(){
    int n, broi=0, arr[100], i=0, nech[100], a=0, b=0;
    scanf("%d", &n);
    while(broi != n){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 != 0){
                broi++;
                nech[a] = arr[i];
                a++;
        }
        i++;
    }
    a--;
    while(b<a){
        printf("%d\n", nech[b]-nech[a]);
        b++;
        a--;
    }
    if(b==a || n%2 != 0)printf("%d", nech[b]);
    return 0;
}
