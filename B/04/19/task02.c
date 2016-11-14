#include <stdio.h>

int main()
{
 int i, n, a, arr[100];

   scanf("%d", &n);
 for(i = 0;i < n;)
 {
   scanf("%d", &a);
   if(a % 2 != 0)
   {
     arr[i] = a;
     i++;
   }
 }
 
 
 for(i = 0; i < n/2; i++)
 {
   printf("%d\n", (arr[i] - arr[n - i - 1]));
 }
   if(n % 2 != 0)printf("%d", arr[n/2]);

 return 0;
}
