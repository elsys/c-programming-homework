#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int max=1000;
int main()
{
    //gets the entered text
    char a[max],newa[max];
    fgets(a,max,stdin);
    int i,current,count=0;

    for(i=0;i<strlen(a);i++)
    {
        current=a[i];
        if((current>='a'&& current<='z')||(current>='A'&& current<='Z'))
        {
            if(current>='A'&& current<='Z')
                {
                    //make them small
                    current=current+32;
                }
            newa[count]=current;
            count++;
        }
    }
    int copy=count;
    for(;copy<max;copy++)
        {
            newa[copy]=' ';
        }
    int trep=0;
    //count = broq na elementite v masiva
    char asciicode='a';
    for(;asciicode<='z';asciicode++){
        for(i=0;i<=count;i++)
        {
           if(i==count) break;
           if(newa[i]==asciicode)
                {
                    trep++;
                }
        }
        if(trep>0)
            {
                printf("%c - %d\n",asciicode,trep);
            }
        trep=0;
    }



  /* //prints the array
   puts(newa); */
    return 0;
}
