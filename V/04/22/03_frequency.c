#include <stdio.h>
#include <string.h>

int main(){
	int i, j, alph[26];
	char sentence[1000];
	fgets(sentence, 1000, stdin);
	for(i=0; i<26; i++) alph[i]=0;
	for(i=0; i<strlen(sentence); i++)
		if(sentence[i]>='A' && sentence[i]<='Z') sentence[i]+=32;
	for(j=0; j<26; j++){
		for(i=0; i<strlen(sentence); i++){
			if(sentence[i]=='a'+j) alph[j]++;
		}
	}
	for(i=0; i<26; i++) if(alph[i]) printf("%c - %d\n", 'a'+i,alph[i]);
	return 0;
}
