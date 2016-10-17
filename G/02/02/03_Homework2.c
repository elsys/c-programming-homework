#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numb;
    do{
    scanf("%d",&numb);
    }while(-1>numb||numb>10);
    if(numb==0)printf("zero");
    if(numb==1)printf("one");
    if(numb==2)printf("two");
    if(numb==3)printf("three");
    if(numb==4)printf("four");
    if(numb==5)printf("five");
    if(numb==6)printf("six");
    if(numb==7)printf("seven");
    if(numb==8)printf("eight");
    if(numb==9)printf("nine");
    return 0;
}
