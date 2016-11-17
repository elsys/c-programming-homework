#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        do{
            scanf("%d", &a[i]);
        }while(a[i]%2==0);
    }
    int c=0;
    int d=n-1;
    int sum;
    for(int j=n/2; j>0; j--){
        sum=a[c]-a[d];
        c++;
        d--;
        printf("%d\n", sum);
    }
    if(n%2==1){
        printf("%d", a[n/2]);
    }
    return 0;
}
