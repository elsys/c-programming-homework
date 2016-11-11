#include<stdio.h>

int main (){
  int a, sum=0, i, n;
  scanf("%d", &a);
  for (i = 0; a!=0; i++){
    n = a%10;
    sum +=n;
    a /= 10;
  }
  sum /= i;
  if(sum < 7){
    printf("light");
  } else {
    printf("heavy");
  }
  return 0;
}
