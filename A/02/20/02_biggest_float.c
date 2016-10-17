#include <stdio.h>

int main(){
  float a, b, c;
  scanf ("\n%f", &a);
  scanf ("\n%f", &b);
  scanf ("\n%f", &c);
  
  if(a>b && a>c) printf("\n%.1f", a);
  if(b>a && b<c) printf("\n%.1f", c);
  if(b>a && b>c) printf("\n%.1f", b);
}
