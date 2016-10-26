
#include <stdio.h>
int main() {
  int number, price, k,total=0,discount=0;
scanf("%d",&number);
scanf("%d",&price);
scanf("%d",&k);
for (int i = 0; i < number; i=k+i)
{
  if(i>=k){
    discount += 0.02*price;
  }
    total = k*(price - discount)+total;
}
printf("%d",total);
return 0;
}

