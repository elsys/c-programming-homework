#include <stdio.h>
int main(){
  float num[1000], end[64];
  int i = 0, g, z, h=0;
  float temp;
  float sum = 0.0;
  while(scanf("%f", &temp) != EOF){
      num[i] = temp;
      i++;
      if(temp == 0){
        h = 1;
      }
  }
  for(g=0;g<i;g++){
    for(z=g+1;z<i;z++){
      if(num[g] == num[z]){
        num[z] = 0;
      }
    }
  }
  for(g=0;g<i;g++){
    if(num[g] != 0 ){
      h++;
    }
  }
  z = 0;
  for(g=0;g<i;g++){
    if(num[g] != 0){
      end[z] = num[g];
      z++;
    }
  }
  for(g=0;g<h;g++){
    while(end[g] > 0){
      if(end[g] == h){
        temp = 0;
        break;
      }
      temp = end[g];
      end[g] = end[g] - h;
    }
    sum = sum + temp;
  }
  printf("%d\n", h);
  printf("%.3f\n", sum);
  return 0;
}
