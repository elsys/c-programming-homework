#include <stdio.h>
#include <stdlib.h>
  int main(){
  int ch, rez;
  scanf("%d",&ch);
  rez=ch*ch;
  printf("%d",rez);
  rez=rez*ch;
  printf("\n %d",rez);
  return 0;
}
