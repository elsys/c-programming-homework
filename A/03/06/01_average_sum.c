#include<stdio.h>

int main(){
    int n, sum = 0, in;
    float avg;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i ++){
        scanf("%d", &in);
        sum += in;
    }
    avg = (float)sum/n;
    printf("Sum: %d\nAvg: %.2f", sum, avg);
    return 0;
}
