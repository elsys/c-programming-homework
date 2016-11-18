#include<stdio.h>
#include<string.h>

int main(){
    char izr[1000], ts='a', tb='A';
    int i, br=0;
    fgets(izr, 1000, stdin);
    for(;ts<='z' && tb<='Z';ts++, tb++){
        br=0;
        for(i=0; i<strlen(izr); i++){
            if(izr[i] == ts || izr[i] == tb){
                br++;
            }
        }
        if(br != 0)printf("%c - %d\n", ts, br);
    }
    return 0;
}
