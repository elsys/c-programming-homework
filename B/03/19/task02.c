#include <stdio.h>

int main()
{
  int n, i;
  float sum = 0;
  do{
   scanf("%d", &n);
  }while((n < 1) || (n > 9999));

  i = 0;
 do
  {
    sum = sum + n % 10;
    n /=10;
    i++;
  }while(n != 0);
  sum /= i;
  if(sum > 7)printf("heavy");
  else printf("light");
  
   
 return 0;
}
