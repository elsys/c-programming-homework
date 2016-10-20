#include<stdio.h>
int main (){
    float n, a, sum=0.0, avg=0.0;
    scanf("%f", &n);
    for(float i=0; i<n; i++){
        scanf("%f", &a);
        sum += a;
    }
    avg = sum/n;
    printf("Sum: %.0f", sum);
    printf("\nAvg: %.2f", avg);
    return 0;
}
