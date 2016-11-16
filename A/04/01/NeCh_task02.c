#include <stdio.h>
int main(){
  int n, i = 0, j;
  int NeCh[1000];
  scanf("%d", &n);
  while(i < n){
    scanf("%d", &NeCh[i]);
    if(NeCh[i] % 2 != 0){
      i++;
    }
  }
  i--;
  for(j = 0;j < n / 2;j++){
    NeCh[j] = NeCh[j] - NeCh[i];
    i--;
  }
  if(n%2 == 0){
    for(i = 0;i < j;i++){
        printf("%d\n", NeCh[i]);
    }
  }else{
    for(i = 0;i <= j;i++){
        printf("%d\n", NeCh[i]);
    }
  }
  return 0;
}
