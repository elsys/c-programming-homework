#include <stdio.h>

int main(){
	int n,a[100],i=0;
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&a[i]);
		i++;
	}
	while(i>0){
		i--;
		printf("%d\n",a[i]);

	}
}
