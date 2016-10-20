#include <stdio.h>
#include <stdlib.h>

int main()
{
    char let,oplet;
    int letnum,opletnum,help;
    do{
    scanf("%c",&let);
    }while(let>'z' || let<'a');
    letnum = let;
    help = letnum - 'a';
    opletnum = 'z'- help;
    oplet = opletnum;
    printf("%c",oplet);

    return 0;
}

