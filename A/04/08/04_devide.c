#include<stdio.h>

float floatmod(float, float);

int main(){
  int i=0, n, m=0, c=0;
  float a[1000] = {0}, b, sum = 0;
  while(scanf("%f", &b) != EOF){
    m=0;
    for(n = 0; n<i; n++){
      if(b == a[n]) {
      m = 1;
      printf("sreshta se\n");
      }
    }
    a[i] = b;
    i++;
    if(m==0) c++;
  }
  /*for(n = 0; n<i; n++){
    printf(" %f", a[n]);
  }*/
  for(n = 0; n<=i; n++){
    sum += floatmod(a[n], c);
  }
  printf("%d\n", c);
  printf("%.3f", sum);
  return 0;
}

float floatmod(float a, float b) {
// ms cakis <3
return (a - b * (int)(a / b));
}
