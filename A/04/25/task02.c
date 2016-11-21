#include <stdio.h>

int main(){

  int n, num;
  int i = 0, j = 0;

  scanf("%d", &n);

  int a[n];

  while(i < n){
    scanf("%d", &num);
    if(num % 2 == 1){
      a[i] = num;
      i++;
    }
  }
  for(i = n - 1, j = 0; i >= j; i--, j++){
    a[0] = a[j];
    if(a[i] == a[0]){
      printf("%d\n", a[i]);break;
    }
    printf("%d\n", a[0] - a[i]);
  }


  return 0;
}
