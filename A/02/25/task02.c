#include <stdio.h>

int main(){

  float a,b,c,i;

  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);

  i = a;

  if (i < b){
    i = b;
  }
  if (i < c){
    i = c;
  }

  printf("%1.f\n", i);

  return 0;
}
