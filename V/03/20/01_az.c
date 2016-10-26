#include<stdio.h>
int main(){

int f, u=0, c, k;
float avr=0;
scanf("%d", &f);
for(c=0;c<f;c++){
scanf("%d", &k);
u+=k;
avr=u;
}

printf("u: %d\nAvg: %.2f", u, avr/f);

return 0;
}
