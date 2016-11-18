#include<stdio.h>
int n[1000] , i, m;

int main(){
  scanf("%d\n", &m);
  for( i = 0; i < m; i++){
    scanf("%d", &n[i]);
  }
  for(i = m - 1 ; i >= 0 ; i--){
  printf("%d\n", n[i]);
  }
}
