#include <stdio.h>
#define max_chars 1000
int main()
{
	char t[max_chars];
	char albet[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
	int i, j=0, k, found;

	fgets(t, max_chars, stdin);

	for(k=0; albet[k]!='\0'; k++){
		for(i=0, j=0, found=0; t[i]!='\0'; i++){
			if(t[i] >= 'A' && t[i] <= 'Z'){
				t[i]=t[i]+32;
			}
			if(albet[k] == t[i]){
				j++;
				found=1;
			}
		}
		if(found){
			printf("%c - %d\n", albet[k], j);
		}
	}

	return 0;
}
