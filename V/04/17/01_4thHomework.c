#include <stdio.h>



int main () {

	int n, count;
	
	scanf("%d",&n);
	
	int arr[n];

	for(count = 0; count < n; count++){
		scanf("%d",&arr[count]);
	}

	for(count = n-1; count >= 0; count--){
		printf("%d\n",arr[count]);
	}
	/*for(count = 0; count < n; count++){
		printf("\n%d",arr[count]);
	}
	*/






return 0;
}
