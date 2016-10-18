#include <stdio.h>
#include <stdilib.h>

int main(){
  char a, b;
  scanf("%d", &a);
  if(a<110){
    a= 110 - a;
    b= 109 + a;
  } else {
    a = 123 - a;
    b = 96 + a;
  }
  printf("%c", b);
}
