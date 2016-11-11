#include <stdio.h>
int main(){
int n, a, i=0;
float sum=0, avg=1;
scanf("%d", &n);
while(i!=n){
scanf("%d", &a);
sum=sum+a;
i++;
}
avg=sum/n;
printf("Sum: %.f", sum);
printf("\nAvg: %.2f", avg);
}

