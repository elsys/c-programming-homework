
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char sent[1000];
    char bukvi[1000];
    int broi[1000] = {0};
    int i, broiach, bukva1 = 0;
    char bukva;
    fgets(sent,1000,stdin);
    bukva = 'a';
    while( bukva <= 'z' )
    {
        broiach = 0;
        i = 0;
        while(sent[i] != '\0')
        {
            if(sent[i] == bukva || sent[i] == bukva - 32)
            {
                bukvi[bukva1] = bukva;
                broi[bukva1]++;
                broiach = 1;
            }
            i++;
        }
        if(broiach>0) bukva1++;
        bukva++;
    }
    bukvi[bukva1] = '\0';
    i = 0;
    while( i < strlen(bukvi))
    {
        printf("\n%c - %d", bukvi[i], broi[i]);
        i++;
    }
    return 0;
}

