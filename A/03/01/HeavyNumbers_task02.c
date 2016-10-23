#include <stdio.h>
int main(){
  int n, i = 0, m, a = 0;
  scanf("%d", &n);
  while(n != 0){
    m = n % 10;
    a = a + m;
    n = n / 10;
    i++;
  }
  a = a / i;
  if(a > 7){
    printf("heavy\n");
  }else{
    printf("light\n");
  }
  return 0;
}
