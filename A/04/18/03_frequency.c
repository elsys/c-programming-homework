#include<stdio.h>
int main(){
int i, br[26] = {0};
char str[1000];
  fgets(str, 1002, stdin);
  for(i = 0; str[i] != '\0'; i++){
    if(str[i] >= 'A' && str[i] <= 'Z')
      str[i] = str[i] + 32;
  }
  for(i = 0; str[i] != '\0'; i++){
    if(str[i] >= 'a' && str[i] <= 'z')
      br[str[i] - 'a']++;
}
for(i = 0; i < 26; i++){
  if(br[i] != 0)
    printf("%c - %d\n", i + 'a', br[i]);
}
  return 0;
}
