#include <stdio.h>
#include <string.h>
int main(){
char s[1000];
int i,j,k;
fgets (s,1000,stdin);
for(j=0;j<26;j++){
k=0;
for(i=0;i<strlen(s);i++){
if(s[i]=='a'+j)k++;
if(s[i]=='A'+j)k++;
}
if(k!=0){
printf("%c - %d\n",'a'+j,k);
}
}
return 0;
}
