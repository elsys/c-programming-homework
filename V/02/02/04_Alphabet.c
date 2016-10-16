#include<stdio.h>
int main() {
char h;
do{
scanf("%c", &h);
}while(h<97 || h>122);
int a=219;
int b=a-h;
printf("\n%c", b);
return 0;
}
