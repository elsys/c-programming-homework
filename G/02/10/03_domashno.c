#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    do{
    printf("zifra");
    scanf("%d",&a);
    }while(a<1,a>9);
    if(a==1)printf("one");
    if(a==2)printf("two");
    if(a==3)printf("three");
    if(a==4)printf("four");
    if(a==5)printf("five");
    if(a==6)printf("six");
    if(a==7)printf("seven");
    if(a==8)printf("eight");
    if(a==9)printf("nine");
    return 0;
}
