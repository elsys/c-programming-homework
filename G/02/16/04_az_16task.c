#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch,asskme;
    int asski;
    do{
        ch=getchar();
    }while(ch<'a'||ch>'z');
    if(ch<='m')
    {
        asski=109-ch;
        asskme=109+asski;
        printf("%c",asskme+1);
    }

    if(ch>='n')
    {
        asski=122-ch;
        asskme=97+asski;
        printf("%c",asskme);
    }
    return 0;
}
