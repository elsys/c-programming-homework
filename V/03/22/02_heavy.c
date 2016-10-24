#include <stdio.h>

int main(){

	int n, i=0;
	float avg=0;
	scanf("%d", &n);
	while(n!=0){
		avg += n%10;
		n /= 10;
		i++;
	}
	avg /= i;
	if(avg>7) printf("heavy");
	else printf("light");
	return 0;
}
