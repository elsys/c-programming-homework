#include <stdio.h>
#include <stdlib.h>
int main()
{
int n, m, k, promo=0, cena=0, broi=0;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);
while(broi<n){
promo=m-(broi/k*(2*m/100));
cena=cena+promo;
broi=broi+1;
}
printf("%d", cena);
return 0;
}
