#include<stdio.h>
int main(){
	int n, lol=0;
	scanf("%d", &n);
	int xD[n], eq=0;
	while(lol<n){
		scanf("%d", &xD[lol]);
		if(xD[lol]%2!=0)lol++;
	}
	if(n%2==0){
		for(lol=0;lol<n/2;lol++){
			eq=xD[lol]-xD[(n-1)-lol];
			printf("%d\n", eq);
		}
	}else{
		n--;
		for(lol=0;lol<n/2;lol++){
			eq=xD[lol]-xD[n-lol];
			printf("%d\n", eq);
		}
		printf("%d", xD[lol]);
	}
	return 0;
}
