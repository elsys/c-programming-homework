#include <stdio.h>
int main(){
  int num[1000];
  int i, n;
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%d", &num[i]);
  }
  i--;
  while(i>=0){
    printf("\n%d", num[i]);
    i--;
  }
  return 0;
}
