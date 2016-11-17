#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets (s, 1000, stdin);

    int l=strlen(s);
    for(int k=97;k<123; k++){
        int c=0;
        int n=-1;
        for(int i=0; i<l-1; i++){
            if(s[i]==k){
                c++;
                if(n==-1){
                    n=i;
                }
            }else if(s[i]==k-32){
                c++;
                if(n==-1){
                    n=i;
                    s[n]=k;
                }
            }
            
        }
        if(c!=0){
        printf("%c - ", s[n]);
        printf("%d\n", c);
        }
    }
    return 0;
}
