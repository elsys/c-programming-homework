#include <stdio.h>
int main() {
  int n, i = 0, sum = 0, x = 0;

  scanf("%d", &n);
    while(n != 0){
      sum = n % 10;
      x += sum;
      n /= 10;
      i++;
    }
    x /= i;
      if(x < 7){
        printf("light\n");
      }
      else printf("heavy\n");

    return 0;
}
