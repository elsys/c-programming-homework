#include <stdio.h>
#include <string.h>
int main(){
  int ascii[500];
  char sen[1000];
  int i, g;
  char z;
  for(i=97;i<=122;i++){
    ascii[i] = 0;
  }
  for(i=65;i<=90;i++){
    ascii[i] = 0;
  }
  for(i=0;i<1000;i++){
    sen[i] = getchar();
    if(sen[i] == '\n'){
      break;
    }
    g = sen[i];
    ascii[g]++;
  }
  for(i=97;i<=122;i++){
    ascii[i] = ascii[i] + ascii[i- 32];
    if(ascii[i] != 0){
      z = i;
      printf("%c - %d\n", z, ascii[i]);
    }
  }
  return 0;
}
