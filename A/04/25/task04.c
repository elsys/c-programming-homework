#include <stdio.h>
#include <math.h>

int main(){

  float a[64], num;
  int i = 0, j = 1;
  int count = 0;

  while(scanf("%f", &num) != EOF){
    for(i = 0; i < count; i++){
      if(num == a[i])
      j = 0;
    }
      if(j){
        a[count] = num;
        count ++;
      }
      j = 1;
  }
  num = 0;
  for(i = 0; i < count; i++){
    num = num + fmod(a[i], count);
  }

  printf("%d\n", count);
  printf("%.3f\n", num);


  return 0;
}
