#include<stdio.h>

int main(){
    int n, a  ;
    float avg, sum = 0.0 ;
   

    scanf("%d", &n );
    for(int i = 0;n>i ;i++){
     scanf("%d", &a);
       sum = sum+a;
    }
    avg = (float)sum/n;
   
printf("Sum: %.0f", sum);
    printf("\nAvg: %.2f", avg);

return 0; 

}
