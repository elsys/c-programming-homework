#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    do{
    scanf("%d",&num);
    }while(-1>num||num>10);
    if(num==0)printf("zero");
    if(num==1)printf("one");
    if(num==2)printf("two");
    if(num==3)printf("three");
    if(num==4)printf("four");
    if(num==5)printf("five");
    if(num==6)printf("six");
    if(num==7)printf("seven");
    if(num==8)printf("eight");
    if(num==9)printf("nine");
    return 0;
}
