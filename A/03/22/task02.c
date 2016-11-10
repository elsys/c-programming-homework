#include <stdio.h>
int main() {
  int a,count=0;
  float sum;
    scanf("%d", &a);
    while(a!=0){
      sum=sum+(a%10);
      count++;
      a=a/10;
    }
    sum=sum/count;
    if(sum>7)printf("heavy\n");
    else printf("light\n");
  return 0;
}
