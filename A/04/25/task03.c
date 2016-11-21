#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

  char  s[1001];
  char cleared[1001];
  int i, j =0, k = 0;

  fgets(s, sizeof(s), stdin);

  for(i = 0; s[i] != '\0'; i++){
    if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
      cleared[j] = s[i];
      j++;
    }
  }
  for(j = 0; cleared[j] != '\0'; j++){
    if(cleared[j] >= 'A' && cleared[j] <= 'Z'){
      cleared[j] += 32;
    }
  }
  for(k = 'a'; k != 'z'; k++){
    for(j = 0; j != '\0'; j++){
      if(cleared[j] == k){
        cleared[j]+=32;
      }
    }
  }
  for(k = 'a'; k !='z'; k++){
    i = 0;
    for(j = 0; cleared[j] != '\0'; j++){
      if(cleared[j] == k){
        i++;
      }
    }
    if(i!=0){
      printf("%c - %d\n", k, i);
    }
  }
  return 0;
}
