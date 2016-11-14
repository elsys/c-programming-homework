#include <stdio.h>

int main(){

	int n, odds=0, buffer, i;
	scanf("%d", &n);
	int array[n-1];
	while(odds<n){
		scanf("%d", &buffer);
		if(buffer%2==1){
			array[odds] = buffer;
			odds++;
		}
	}
	for(i=0; i<n/2; i++)
		printf("%d\n", array[i]-array[n-1-i]);
	if(n%2==1) printf("%d", array[n/2+1]);
	return 0;
}
