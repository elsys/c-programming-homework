#include<stdio.h>
int main (){

  int n, k, i = 1, redu, c;
  float m, price = 0;

    scanf("%d", &n);
    scanf("%f", &m);
    scanf("%d", &k);
    redu = 0;

    while(i <= n){
      c = m * redu / 100;
      price += m - c;
      
      if(i % k == 0){
        redu += 2;
      }
      i++;
    }

    printf("%.f\n",price);
    return 0;
}
