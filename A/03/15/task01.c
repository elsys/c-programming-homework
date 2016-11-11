#include <stdio.h>
int main (){
  int sum = 0, n, i = 0, a;
  float avg = 0;
      scanf("%d",&n);

    while(i < n){
      scanf("%d",&a);
      sum = sum + a;
      avg = avg + a;
      i++;
    }
    avg = avg / n;

   printf("Sum: %d\n",sum );
   printf("Avg: %.2f\n",avg );
   return 0;
}
