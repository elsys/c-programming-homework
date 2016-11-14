#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	
	int alphaC[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	char str[1000];
	int count;
	int counterSym = 0;
	int i;	
	int n;
	int currLetCode = 0;
	int tmpLetCode = 0;
	int ind = -1;
	int minus = 0;
	
	fgets(str,1000,stdin);
	n = strlen(str);

	for(count = 0; count < n; count++) {
		for(i = count; i < n; i++) {
			if (str[count] >= 'a' && str[count] <= 'z') {
				minus = 'a';
			} else if (str[count] >= 'A' && str[count] <= 'Z') {
				minus = 'A';
			}

			if (minus != 0) { // it is a letter
				currLetCode = str[count];
				tmpLetCode = str[i];

				// 1st : a == a or A == A, 2nd : a == A, A == a
				if (currLetCode == tmpLetCode || abs(currLetCode - tmpLetCode)-32 == 0)  {
					ind = currLetCode - minus;
					counterSym++;	
				} 
			}
		}

		if (ind != -1 && alphaC[ind] == 0) {
			alphaC[ind] = counterSym;
		}
	
		counterSym = 0;
	}

	for(i = 0; i < 26; i++){
		if (alphaC[i] != 0) {		
			printf("%c - %d\n", alphabet[i], alphaC[i]);
		}
	}

	return 0;
}
