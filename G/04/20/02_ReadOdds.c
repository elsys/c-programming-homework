#include <stdio.h>
int main()
{
    int i,n,b,t;
    int mas[100];

    scanf("%d",&n);
    for (i=0,b=0;i<n;)
      {
        scanf("%d",&t);
        if(t%2!=0){mas[i]=t;i++;b++;}
      }
      for(i=0;i<n/2;i++) printf("%d\n",mas[i]-mas[n-i-1]);
      printf("%d\n",mas[b/2]);
  return 0;
}
