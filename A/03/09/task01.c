#include <stdio.h>

int main(){
    int n, i=0;
    float a, sum=0, avg;
    
    scanf("%d", &n);
    
    do{
        scanf("%f", &a);
        sum=sum+a;
        i++;
    }while(i<n);
    
    printf("Sum: %.0f", sum);
    
    avg=sum/n;
    printf("\nAvg: %.2f", avg);
    
    return 0;
}
