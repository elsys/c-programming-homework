#include <stdio.h>
#define percent_increase 0.02f

int main()
{
 int n, i, m, k;
 int summation = 0;
 float percent = 0.0f;

 scanf("%d", &n);
 scanf("%d", &m); 
 scanf("%d", &k);
 int c = k;
 for(i = 0;i < n; i++)
 {
  if(i == k)
  {
   percent += percent_increase;
   k += c;
  }
  summation = summation + m - (m * percent);
 }
 printf("%d", summation);

 return 0;
}
