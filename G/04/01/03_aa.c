#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Text[1000],ch;
    int Letter[25],i,j,len;
    fgets(Text, 1000, stdin);
    len=strlen(Text);
    for(i='a';i<='z';i++){
        Letter[i-'a']=0;
        for(j=0;j<len;j++){
            ch=0;
            if(Text[j]>='A'&&Text[j]<='Z')
                ch=Text[j]-'A'+'a';
            else if(Text[j]>='a'&&Text[j]<='z')
                    ch=Text[j];

            if(ch>0&&ch==i)
                Letter[i-'a']++;

        }
    }
    for(i='a';i<='z';i++){
        if(Letter[i-'a']>0){
            printf("%c - %d\n",i,Letter[i-'a']);
        }
    }

return 0;
}

