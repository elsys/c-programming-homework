#include <stdio.h>

int main() {
int n;
do{
scanf("%d", &n);
}while(n<0 || n>9);
switch(n){
case 1:printf("\n one");break;
case 2:printf("\n two");break;
case 3:printf("\n three");break;
case 4:printf("\n four");break;
case 5:printf("\n five");break;
case 6:printf("\n six");break;
case 7:printf("\n seven");break;
case 8:printf("\n eight");break;
case 9:printf("\n nine");break;
case 0:printf("\n zero");break;
} return 0;
}
