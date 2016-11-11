#include <stdio.h>
int main() {
  int n,m,k,count=0,sum=0,count2=0;
  scanf("%d", &n);
  scanf("%d", &m);
  scanf("%d", &k);
  while(count<n){
    if(count2>=k){
      m=m*0.98;
      count2=0;
    }
    sum=sum+m;
    count++;
    count2++;
  }
  printf("%d\n",sum);
  return 0;
}
