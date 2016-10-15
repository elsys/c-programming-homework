#include<stdio.h>

int main(){
  int n = 3 , i = 0;
  float a, max;
    printf("Enter a number:\n");
    scanf("%f", &a);
      max = a;
    do{
      printf("Enter a number:\n");
      scanf("%f", &a);

        if (max < a){
            max = a;
        }
          i++;
    }while(i < n - 1);

    printf("The max of these numbers is:\n%.2f\n", max);

    return 0;
}
