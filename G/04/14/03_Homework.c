#include <stdio.h>
#include <string.h>
int main(){
  int a[500];
  char s[1000];
  int i, n;
  char z;
  i=97;
  while(i<=122){
     a[i] = 0;
     i++;
  }
  i=65;
  while(i<=90){
      a[i] = 0;
      i++;
  }
  i=0;
  while(i<1000){
     s[i] = getchar();
    if(s[i] == '\n'){
      break;
      i++;
  }
    n=s[i];
    a[n]++;
  }
  i=97;
  while(i<=122){
    a[i] = a[i] + a[i- 32];
    if(a[i] != 0){
      z = i;
      printf("%c - %d\n", z, a[i]);
    }
    i++;
  }
  return 0;
}
