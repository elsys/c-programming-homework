#include <stdio.h>

int main() {
int n;
int number;
int count;
int sum = 0;
float average;
scanf("%d", &n);
for(count = 0; count < n; count++){
scanf("%d", &number);
sum += number;
}
average = (float) sum / n;
printf("Sum: %d\nAvg: %.2f\n",sum,average);
return 0;
}
