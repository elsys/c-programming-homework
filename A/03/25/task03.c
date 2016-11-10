#include <stdio.h>

int main(){
  int n, m, k;
  int i = 0, sum = 0;
  float discount = 0;

  scanf("%d", &n);
  scanf("%d", &m);
  scanf("%d", &k);

  for(i=1,discount=0.02*m;i<=n;i++)
	{
		sum=sum+m;
		if(i%k==0)m=m-discount;
	}
  printf("%d\n",sum);

  return 0;
}
