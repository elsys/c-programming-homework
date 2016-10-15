#include<stdio.h>

int main(){
  int n = 3 , i = 0;
  float a, max;
    scanf("%f", &a);
      max = a;
    do{
      scanf("%f", &a);

        if (max < a){
            max = a;
        }
          i++;
    }while(i < n - 1);

    printf("\n%.2f\n", max);

    return 0;
}
