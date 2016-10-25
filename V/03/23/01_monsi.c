#include <stdio.h>
int main() {
    int n, number, i, sum=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&number);
        sum=sum+number;
    }
    avg=(float)sum/n;
    printf("Sum: %d\nAvg: %.2f\n",sum,avg);
    return 0;
}
