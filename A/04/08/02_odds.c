#include<stdio.h>

int main (){
  int n=0, arr[100], a=0, c=0, toprint=0, i = 0;
  scanf("%d", &n);
  for(i=0; a<n; i++){
    scanf("%d", &arr[i]);
    if(arr[i]%2!=0){
      a++;
    }else {
      i--;
    }
  }
  /*for(i=0; i< n; i++){
    printf("%d", arr[i]);
  }*/
  for(i=0; i<n/2; i++){
    toprint = arr[i] - arr[n-i-1];
    printf("%d\n", toprint);
  }
  if(n%2!=0){
    c = n/2;
    printf("%d", arr[c]);
  }
  return 0;
}
