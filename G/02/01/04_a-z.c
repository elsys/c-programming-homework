#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    char bukva;
    do{
    printf("\n Input  letter:");
    scanf("%c",&bukva);
    }while(bukva<'a' || bukva>'z');

    y='a'+'z'-bukva;
    printf("%c",y);
    return 0;
}

