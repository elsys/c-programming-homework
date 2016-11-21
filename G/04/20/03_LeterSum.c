#include <stdio.h>
#include <string.h>
int main(){
  char s[1000];
  int i,j,num=0;
  fgets (s,1000,stdin);
    for(j=0;j<26;j++,num=0)
    {
          for(i=0;i<strlen(s);i++)
            if(s[i]=='a'+j||s[i]=='A'+j)num++;
            if(num!=0)printf("%c-%d\n",'a'+j,num);
    }
  return 0;
}
