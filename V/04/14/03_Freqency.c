#include<stdio.h>
#include <string.h>

 int main(){
 int i, c, j;
 char arr[1000];
 char mass1[26]="abcdefghijklmnopqrstuvwxyz";
 char mass2[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 fgets(arr, 1000, stdin);
 for(i = 0; i < 26; i++)
 {
 	for(c = 0, j = 0;c < strlen(arr) - 1; c++)
	{
		if((arr[c] >= 'a' && arr[c] <= 'z')||(arr[c] >= 'A' && arr[c] <= 'Z')) 
		{
		if(arr[c] == mass1[i]||arr[c] == mass2[i]){j++;}
		}
		if(c == strlen(arr) - 2)
		{
                if(j > 0){printf("%c - %d\n", mass1[i], j);}
	 	}
	}
 }
 return 0;
 }
