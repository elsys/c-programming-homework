#include <stdio.h>

int main()
{
 int i, n, arr[100];
 
 do{
   scanf("%d", &n);
 }while(n <= 0);

 for(i = 0; i < n; i++)
 {
  do{
   scanf("%d", &arr[i]);
  }while(arr[i] % 2 == 0);
 }
 
 for(i = 0; i < n/2; i++)
 {
   printf("%d\n", (arr[i] - arr[n - i - 1]));
   if(n % 2 != 0)printf("%d", arr[n/2]);
 }

 return 0;
}
