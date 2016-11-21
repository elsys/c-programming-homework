#include <stdio.h>

int main(){

  int i,n;

  scanf("%d", &n);

  int a[n];

  for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  for(i = n; i >= a[0]; i--){
    printf("%d\n", a[i-1]);
  }
  return 0;
}
