#include<stdio.h>

int main(){
    int n, ar[1000];

    scanf("%d", &n);

    for(int i = 0 ; i < n; i++){
       scanf("%d", &ar[i]);
      if(ar[i] % 2==0){
          i--;

        }
        }
    for(int i = 0 ; i < n/2 ;i++){
        if(i != n-i){
         printf("%d\n", ar[i] - ar[(n - 1) - i]);
       }
    }
    if(n % 2 != 0) {

      printf("%d\n", ar[n / 2]);
    }
    return 0;
}
