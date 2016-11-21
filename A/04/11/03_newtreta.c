#include<stdio.h>
#include<string.h>

int main(){

  char arr[1001];
  int dudu[26] = {0};


fgets(arr, 1001,stdin);

  for(int i = 0 ; i < strlen(arr) ; i ++){
       if(arr[i] >= 'a' && arr[i] <='z')
           dudu[arr[i]-'a']++;
       if(arr[i] >= 'A' && arr[i] <= 'Z')
           dudu[arr[i]-'A']++;
}
  for(int i = 0; i < 26; i++){
    if(dudu[i])printf("%c - %d\n", i + 'a', dudu[i]);
  }

  return 0;
}
