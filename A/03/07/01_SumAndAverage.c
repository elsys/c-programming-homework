#include<stdio.h>
int main (){
    float n, a, i, sum=0;
    float avg=0;
    scanf("%f", &n);
    for(i=0; i<n; i++){
        scanf("%f", &a);
        sum += a;
    }
    avg = sum/n;
    printf("Sum: %.0f", sum);
    printf("\nAvg: %.2f", avg);
    return 0;
}
