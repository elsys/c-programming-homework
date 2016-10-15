#include<stdio.h>

	int main(){
		int a, square, cube;

		printf("Enter a number\n");
		scanf("%d",&a );

		square = a * a;
		cube = a * a * a;

		printf("The square of the number is:\n%d" ,square);
		printf("\nThe cube of the number is:\n%d\n" ,cube);

		return 0;
	}
