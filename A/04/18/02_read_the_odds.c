#include <stdio.h>
int main() {
int arr[500], i = 0, n;
scanf("%d", &n);
  while(i < n){
    scanf("%d", &arr[i]);
    if(arr[i] % 2 != 0){
      i++;
    }
  }
  i = 0;
  while(i < n / 2){
    printf("%d\n", arr[i] - arr[(n - 1) - i]);
    i++;
  }
  if(n % 2 != 0){
    printf("%d\n", arr[n / 2]);
  }
return 0;
}
