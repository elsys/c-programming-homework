#include <stdio.h>
int main() {
int arr[500], i, n;
  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  while(i--){
    printf("%d\n", arr[i]);
  }

return 0;
}
