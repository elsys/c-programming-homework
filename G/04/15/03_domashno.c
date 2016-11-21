#include<stdio.h>
#include<string.h>

    int main() {
    char s[1000];
    int found,p,k,i;
    char r[27];
    fgets(s,1000,stdin);
    for( i=0;i<27;i++)
        {
            r[i]=0;
        }
        for(i=0;i<strlen(s);i++)
        {
            found=0;
            if(s[i]>='a' && s[i]<='z')
            {
                p=s[i]-'a';
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                p=s[i]-'A';
            }
            else
            {
                found=1;
            }
            if(found==0)
            {
                r[p]++;
            }
        }
        for(i=0;i<27;i++)
        {
            if(r[i]!=0)
            {
                k='a'+i;
                printf("%c - %d\n", k,r[i]);
            }
        }
        return 0;
    }
