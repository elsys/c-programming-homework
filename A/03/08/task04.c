#include<stdio.h>
int main (){

	int numoflines, count = 0;
	scanf("%d", &numoflines);
	int i;
	for( i = 0; i <= numoflines/2; i++){ // lines

		for (int j = 0; j < numoflines/2 - i; j++){ // spaces
			printf(" ");
			}
		if (i != numoflines/2){ //prints *&#
			if (i != 0) printf("*");
			for (int s = 1; s <= i*2 - 1; s++){
				printf("#");
				count++;
			}
			printf("*");
		}
		if(i == numoflines/2){ //last line8
			for (int i = 0; i < numoflines; i++){
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
	}
