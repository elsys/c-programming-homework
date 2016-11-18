#include <stdio.h>
#include <string.h>
int main() {
  char strg[1000];
  int s[26],count;
  for(count=0;count<26;count++){
    s[count]=0;
  }
  fgets(strg,1000,stdin);
  for(count=0;count<strlen(strg);count++){
    if(strg[count]>=65 && strg[count]<=90){
      strg[count]=strg[count]+32;
    }
  }
  for(count=0;count<strlen(strg);count++){
    if(strg[count]>=97 && strg[count]<=122){
      s[strg[count]-'a']=s[strg[count]-'a']+1;
    }
  }
  for(count=0;count<26;count++){
    if(s[count] != 0)printf("%c - %d\n", count+'a', s[count]);
  }
  return 0;
}
