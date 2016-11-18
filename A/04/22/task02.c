#include <stdio.h>
int main() {
int arr[600], n, count=0, a;
scanf("%d", &n);
while(count<n){
  scanf("%d", &a);
  if(a%2==1){
    arr[count]=a;
    count++;
  }
}
for(count=0;count<n/2;count++){
  printf("%d\n", arr[count]-arr[n-count-1]);
}
if(n%2==1)printf("%d\n", arr[n/2]);
  return 0;
}
