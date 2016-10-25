#include <stdio.h>
int main(){
  int n, s, i, a, k=2, j, c, t;
  printf(" ");
  scanf("%d", &n);
  j = n + n - 1;
  t = j;
  s = (n - 2) * (n - 2);
  printf(" %d\n", s);
  for(i=0;i<j;i++){
    printf(" ");
    j = j - 1;
  }
  printf("*\n");
  for(i=2;i<n;i++){
    for(c=0;c<j;c++){
      printf(" ");
    }
    for(a=0;a<=k;a++){
      if (a == 0 || a == k){
        printf("*");
      }else{
        printf("#");
      }
    }
    printf("\n");
    k = k + 2;
    j = j - 1;
  }
  printf(" ");
  for(i=0;i<t;i++){
      printf("*");
  }
  printf("\n");
  return 0;
}
