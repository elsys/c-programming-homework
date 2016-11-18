#include<stdio.h>



int main(){
    float sum = 0, a[64] = {0};
    int count, i, c;
    float n;

    for(i = 0 ; scanf("%f", &n)!=EOF;){
        a[i] = n;
        int j = 1;

        for(c = 0 ; c < i; c++){
          if(a[c] == a[i])j = 0;
        }
        if(j)i++;
      }
      printf("%d\n", i);

      for(count = 0; count < i; count++){
          if (a[count] >= i){
            while(a[count] >= i ){
              a[count] -= i;
            }
          }
          sum += a[count];
        }
        printf("%.3f\n", sum);
    return 0;
}
