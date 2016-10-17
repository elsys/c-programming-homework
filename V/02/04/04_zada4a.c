#include<stdio.h>

int main()
{
 char cl,k,pp;
 printf("\n Vuvedi bukva:");
 scanf("%c", &cl);

 pp= cl-'a';
 k= 'z'-pp;

 printf("\n%c",k);

 return 0;
}

