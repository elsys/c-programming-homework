#include <stdio.h>

int main() {
  float a,b,c;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  if(a>b){
    if(a>c)printf("The largest num is %f", a);
    else printf("The largest num is %f", c);
  }else if(b>c)printf("The largest num is %f", b);
  return 0;
}
