#include<stdio.h>

float floatmod(float, float);

int main(){
  int i=0, n, m=0, c=0;
  float a[1000][2] = {{0}}, b, sum = 0;
  while(scanf("%f", &b) != EOF){
    m=0;
    for(n = 0; n<i; n++){
      if(b == a[n][0]) {
      m = 1;
      }
    }
    a[i][0] = b;
    if(m==0){
       c++;
       a[i][1] = 1;
    }
    i++;
  }
  /*for(n = 0; n<i; n++){
    printf("%f, ", a[n][0]);
    printf("%f\n", a[n][1]);
  }*/
  for(n = 0; n<=i; n++){
    if(a[n][1] == 1){
      sum += floatmod(a[n][0], c);
    }
  }
  printf("%d\n", c);
  printf("%.3f", sum);
  return 0;
}

float floatmod(float a, float b) {
// ms cakis <3
return (a - b * (int)(a / b));
}
