#include<stdio.h>
int main (){
  int n, i, new1;
  float avg = 0;

  do {
    scanf("%d",&n);
  }while(n < 1 && n > 9999);

      for(i = 0; n / 10 != 0; i++){
        new1 = n % 10;
        avg += new1;
        n /= 10;
      }

      avg = avg / i;

      if(avg < 7)
        printf("light\n");
      else
        printf("heavy\n");

      return 0;
}
