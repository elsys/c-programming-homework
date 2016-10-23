#include<stdio.h>
int main (){

	int numoflines, count = 0;
	scanf("%d", &numoflines);
	int i;
	numoflines--;
	for(i = 0; i <= numoflines; i++){
		if(i != numoflines){
			for (int s = 1; s <= i*2 - 1; s++){
				count++;
			}
		}
	}
	printf("%d\n", count);
	for( i = 0; i < numoflines; i++){ // lines

		for (int j = 0; j < numoflines - i; j++){ // spaces
			printf(" ");
			}
		if (i != numoflines){ //prints *&#
			if (i != 0) printf("*");
			for (int s = 1; s <= i*2 - 1; s++){
				printf("#");
			}
			printf("*");
		}
		if(i == numoflines - 1){ //last line8
			printf("\n");
			for (int i = 0; i < numoflines*2 + 1; i++){
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
	}
