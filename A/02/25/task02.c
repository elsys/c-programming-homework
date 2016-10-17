#include <stdio.h>

int main(){

  double a,b,c,i;

  printf("Enter a: \n");
  scanf("%lf", &a);
  printf("Enter b: \n");
  scanf("%lf", &b);
  printf("Enter c: \n");
  scanf("%lf", &c);

  i = a;

  if (i < b){
    i = b;
  }
  if (i < c){
    i = c;
  }

  printf("%lf\n", i);

  return 0;
}
