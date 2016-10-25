#include <stdio.h>
int main() {
int number;
int sum = 0;
int digit = 0;
scanf("%d", &number);
while(number > 0){
sum += number % 10;
number /= 10;
digit ++;
}
if(sum / digit > 7){
printf("heavy\n");
}else{
printf("light\n");
}
return 0;
}
