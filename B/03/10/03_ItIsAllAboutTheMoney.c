



#include "stdio.h"


int main() {

  int n, m, k,sum=0,otstypka=0;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);

for (int i = 0; i < n; i+=k)
{
  if(i>=k){

    otstypka += 0.02*m;
  }

    sum = k*(m - otstypka)+sum;

}

printf("%d",sum);


return 0;
}