#include<stdio.h>

int main(){
  char a[1000] = "";
  int i, tosave = 0, b[25] = {0}, skip;
  scanf("%999[^\r\n]", a);
  for(i = 0; i < 999; i++){
    skip = 0;
    if(a[i] <= 'Z' && a[i] >= 'A'){
      tosave = a[i] - 'A';
    } else if (a[i] <= 'z' && a[i] >= 'a'){
      tosave = a[i] - 'a';
    } else {
      skip =1;
    }
    if(skip == 0){
      b[tosave]++;
    }
  }
  for(i = 0; i < 25; i++){
    if(b[i] > 0){
      printf("%c - %d\n", 'a'+i, b[i]);
    }
  }
  return 0;
}
