#include <stdio.h>

int main() {
	int  lastRow, count, rows, countSymbols, hashes, spaces, countHash, i, ds, sumDS;
	scanf("%d",&rows); 
	lastRow = 2*rows - 1;
	spaces = lastRow/2;
	hashes = 1;

	if ( rows <= 2 ) {
		sumDS = 0;
	} else {
		ds = 1;
		sumDS = 1;
		for ( count = 1; count < rows - 2; count++) { // Broi ds
			ds = ds + 2;
			sumDS = sumDS + ds;
		}
	}
	printf("%d\n", sumDS);
	
	for ( count = 1; count  <= rows; count++) {
		for (countSymbols = 1; countSymbols <= spaces; countSymbols++){
				printf(" ");
		}
		if(count == 1) {
			printf("*\n");
		 	spaces = spaces - 1;
		 	continue;
		}
		if ( count != rows ){
			printf("*");
			for ( countHash = 1; countHash <= hashes; countHash++){
					printf("#");
					
			}
			printf("*\n");
			spaces = spaces - 1;
		}
		if ( count == rows ) {
			for ( i = 0; i < lastRow; i++) {
				printf("*");
			}
		}
		hashes = hashes + 2;
	}
	return 0;
}
