#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int s=1, i=1;
	while(i<=2){
	s=s*n;
	i++;
	}
	printf("%d \n", s);
	s=1;
	i=1;
	while(i<=3){
	s=s*n;
	i++;
	}
	printf("%d \n", s);
return 0;
}
