#include<stdio.h>



int main(){
    float sbor = 0, a[64] = {0};
    int q, i, c;
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

      for(q = 0; q < i; q++){
          if (a[q] >= i){
            while(a[q] >= i ){
              a[q] -= i;
            }
          }
          sbor = sbor+ a[q];
        }
        printf("%.3f\n", sbor);
    return 0;
}
