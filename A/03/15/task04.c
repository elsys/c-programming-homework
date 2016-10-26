#include <stdio.h>
int main (){
  int a, i = 1, j, c;
  scanf("%d",&a);
  printf("%d\n", (a - 2) * (a - 2));
  //bottom = (a * 2) - 1;

      while(i <=a){

        for (j = 1; j <= a - i; j++){
              printf(" ");
            }
        printf("*");

          if (i > 1){
             if(i == a)for(c = 0; c < i * 2 - 3; c++){
                    printf("*");
             }
             else if(i > 1)for(c = 0; c < i * 2 - 3; c++){
                    printf("#");
             }printf("*");
           }printf("\n");
           i++;
        }
      return 0;
}
