#include<stdio.h>
int main(){
char let;
do{
let = getchar();
}while(let<'a'||let>'z');
let='a'+'z'-let;
printf("%c\n", let);
return 0;}
