#include<stdio.h>
int main(){
  char a, opp;
  scanf("%c", &a);
  opp = ('z' - (a - 'a'));
  printf("\n%c\n", opp);
  return 0;
}
