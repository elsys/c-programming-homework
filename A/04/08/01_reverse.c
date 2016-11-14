#include<stdio.h>

int main (){
  int arr[100], temp=0, i=0, n=0;
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n/2; i++) {
    temp = arr[n-i-1];
    arr[n-i-1] = arr[i];
    arr[i] = temp;
  }
  for (i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}
