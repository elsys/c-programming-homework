#include<stdio.h>
#include<string.h>

int main(){

	char sentenceOG[1000];
	fgets(sentenceOG,1000,stdin);

	int i=0;
	int j=0;
	int juan=0;
	for(;juan<26;juan++){
		j=0;
		for(i=0;i<strlen(sentenceOG);i++){
			if(sentenceOG[i]=='a'+juan || sentenceOG[i]=='A'+juan) j++;
		}
		if(j!=0) printf("%c - %d\n", 'a'+juan, j);
	}
return 0;
}
