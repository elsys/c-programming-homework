#include<stdio.h>
int main (){
  int k, n, m, sum=0, disc=0;
  scanf("%d", &n);
  scanf("%d", &m);
  scanf("%d", &k);
  for (int i = 0; i < n; i++){
    if(i%k==0 && i!=0){
      disc += 2;
    }
    sum += m - (m * disc/100);
  }
  printf("%d", sum);
  return 0;
}
