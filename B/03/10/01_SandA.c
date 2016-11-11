



#include "stdio.h"


int main() {

  int n, s,sum=0;
  float avg=0;
scanf("%d",&n);

for (int i = 0; i < n; ++i)
{
scanf("%d",&s);
sum = sum + s;
avg = (float)sum/(i+1);

}

printf("Sum: %d\nAvg: %.2f",sum,avg);

return 0;
}