#include<stdio.h>
#include<string.h>

int main(){
    char sent[1001];
    int let[26];
    for(int i = 0 ; i < 26 ; i ++)
        let[i] = 0;

    fgets(sent, 1002, stdin);    
    for(int i = 0 ; i < strlen(sent) ; i ++){
        if(sent[i] >= 'a' && sent[i] <='z')
            let[sent[i]-'a']++;
        if(sent[i] >= 'A' && sent[i] <= 'Z')
            let[sent[i]-'A']++;
    }

    for(int i = 0 ; i < 26 ; i ++)
        if(let[i] != 0)
            printf("%c - %d\n", 'a' + i, let[i]);
    return 0;
}
