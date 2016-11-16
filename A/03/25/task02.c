#include <stdio.h>

int main(){
  int a,sum = 0, i = 0;

  scanf("%d", &a);

  while (a != 0){
    sum = sum + a % 10;
    a = a / 10;
    i++;
  }

  sum = sum / i;

  if(sum <= 7)
  printf("light\n");

  if(sum > 7)
  printf("heavy\n");

  return 0;
}
