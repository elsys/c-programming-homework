#include <stdio.h>

int main() {
  float a,b,c;
  printf("Give first num:\n");
  scanf("%f", &a);
  printf("Give second num:\n");
  scanf("%f", &b);
  printf("Give third num:\n");
  scanf("%f", &c);
  if(a>b){
    if(a>c)printf("The largest num is %f", a);
    else printf("The largest num is %f", c);
  }else if(b>c)printf("The largest num is %f", b);
  return 0;
}
