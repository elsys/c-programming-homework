#include <stdio.h>
int main()
{
  int i, n, arr[100];

  do{
  scanf("%d", &n);
  }while(n <= 0);
  
  for(i = 0; i < n; i++)
  scanf("%d", &arr[i]);
  
  for(i = n - 1; i >= 0; i--)
  printf("%d\n", arr[i]);

  return 0;
}
