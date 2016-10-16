#include <stdio.h>
int main()
{ char s;


   while (s <'a' || s>'z')
    {
        printf("\n input letter:");
        scanf("%c",&s);
        getchar();
    }
printf("\n %c\n",'a'+('z'-s));


    return 0;
}
