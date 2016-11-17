#include<stdio.h>
int main(){
int xD, lol=0;
scanf("%d", &xD);
int kappa[xD];
for(;lol<xD;lol++){
scanf("%d", &kappa[lol]);
}
for(lol--;lol>=0;lol--){
printf("%d\n", kappa[lol]);
}
return 0;
}
