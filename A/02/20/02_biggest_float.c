#include <stdio.h>

int main(){
  float a, b, c;
  scanf ("\n%f", &a);
  scanf ("\n%f", &b);
  scanf ("\n%f", &c);
  
  if(a>b && a>c) printf("\n%.3f", a);
  if(b>a && b<c) printf("\n%.3f", c);
  if(b>a && b>c) printf("\n%.3f", b);
}
