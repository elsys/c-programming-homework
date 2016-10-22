#include <stdio.h>

int main(){

	int i, n, j, h=0;
	scanf("%d", &n);
	for(j=1; j<n-1; j++)for(i=0; i<j*2-1; i++)h++;
	printf("%d\n", h);
	for(i=0; i<n-1; i++) printf(" ");
	printf("*");
	for(i=0; i<n-1; i++) printf(" ");
	printf("\n");
	for(j=1; j<n-1; j++){
		for(i=n-j-1; i!=0; i--) printf(" ");
		printf("*");
		for(i=0; i<j*2-1; i++) printf("#");
		printf("*");
		for(i=n-j-1; i!=0; i--) printf(" ");
		printf("\n");
	}
	for(i=0; i<n*2-1; i++) printf("*");
	return 0;
}
