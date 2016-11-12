#include <stdio.h>

int main(){
    int n;
    int number;
    int sum;

    scanf("%d", &n);

    for(int i = 0;i < n;i++){
        scanf("%d", &number);

        sum = sum + number;
    }

    printf("Sum: %d\n", sum);
    printf("Avg: %.2f\n", (float)sum / n);

    return 0;

}
