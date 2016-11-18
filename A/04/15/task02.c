#include<stdio.h>

int main(){
  int m[1000], n, i;
  scanf("%d", &n);

  for(i = 0; i < n;){
      scanf("%d", &m[i]);
      if(m[i] % 2){
          i++;
      }
    }
    for(i = 0;  i < n / 2 ; i++){
      printf("%d\n", m[i] - m[(n - 1) - i]);
    }
    if(n % 2){
      printf("%d\n", m[n / 2]);
    }
    return 0;
}
