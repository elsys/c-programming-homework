#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i = 0;
    int num;

    scanf("%d", &n);

    int arr[n];

    while(i < n){
        scanf("%d", &num);
        if(num % 2 != 0){
            arr[i] = num;
            //printf("%d", arr[i]);
            i++;
        }
    }

    for(i = 0; i < n / 2; i++){
        printf("%d\n", arr[i] - arr[n - 1 - i]);
    }

    if(n % 2 != 0){
        printf("%d", arr[n / 2]);
    }

    return 0;
}
