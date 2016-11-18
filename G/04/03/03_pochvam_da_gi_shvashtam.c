#include<stdio.h>

int main(){
    char k[1000];
    int m[32] = {0},i;
    fgets(k, 1000, stdin);
    for(i = 0 ; k[i] != '\0' ; i++){
        char let = k[i];
        if(let >= 'a' && let <= 'z'){
            m[let - 'a']++;
        }
        if(let >= 'A' && let <= 'Z'){
            m[let - 'A']++;
        }
    }
    for(i = 0 ; i < 32 ; i ++){
        char let = 'a' + i;
        if(m[i] != 0){
            printf("%c - %d\n", let, m[i]);
        }
    }
    return 0;
}
