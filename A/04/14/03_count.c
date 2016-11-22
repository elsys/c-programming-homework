#include <stdio.h>
#include <string.h>
int main(){
  int i = 0,j = 0;
  int count [52];
  char az = 97;
  char AZ = 65;
  char string[1000];
  for(i=0;i<52;i++){
    count[i] = 0;
  }
  fgets(string,1000,stdin);
  int len = strlen(string);
  for(i=0; i < len; i++){
    for(j=0;j<26;j++){
      if(string[i] == az + j || string[i] == AZ + j){
        count[j]++;
      }
    }
  }
  for(j=0;j<52;j++){
    if(count[j] != 0){
      printf("%c - %d\n",97+j,count[j]);
    }
  }
  return 0;
}
