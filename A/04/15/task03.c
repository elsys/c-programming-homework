#include<stdio.h>

int main(){

  char s[1001];
  int frq[26] = {0};
  int i;

  fgets(s, 1001, stdin);

  for(i = 0; s[i] != '\0'; i++){
    if(s[i] >= 'A' && s[i] <= 'Z')s[i] = s[i] + 32;
    }

  for(i = 0; s[i] != '\0'; i++){
    if(s[i] >= 'a' && s[i] <= 'z')frq[s[i] - 'a']++;
  }

  for(i = 0; i < 26; i++){
    if(frq[i])printf("%c - %d\n", i + 'a', frq[i]);
  }

  return 0;
}
