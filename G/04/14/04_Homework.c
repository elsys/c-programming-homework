#include <stdio.h>
#include <stdlib.h>

int main(){
    float s=0, a[64]={0};
    int count, i, c;
    float n;
    i=0;
    while(scanf("%f", &n)!=EOF){
        a[i] = n;
        int j = 1;
        c=0;
        while(c<i){
            if(a[c] == a[i])j = 0;
            c++;
        }
        if(j)i++;
    }
      printf("%d\n", i);
      count=0;
      while(count<i){
        if (a[count] >= i){
        while(a[count] >= i ){
        a[count] -= i;
        }
        count++;
      }
          s += a[count];
        }
        printf("%.3f\n", s);
    return 0;
}
