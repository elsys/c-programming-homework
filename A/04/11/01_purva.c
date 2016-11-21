#include <stdio.h>


int main () {
    int a , ar[1000];

    scanf("%d", &a);
     for(int i = 0 ; i < a ; i++ ){
     scanf("%d", &ar[i]);
}

     for(int i = a - 1 ; i >= 0 ; i--){
     printf("%d\n", ar[i]);
}
     return 0;
 }
