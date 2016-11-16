#include <stdio.h>


int main() {

	int n, count;
	
	scanf("%d",&n);
	
	int arr[n];
	
	for(count = 0; count < n;) {
		scanf("%d",&arr[count]);
		if (arr[count] % 2 != 0) {
			count++;
		}
	}
		
	int count2;
	int sum[n/2], i;
	
	for(i = 0; i < n/2; i++) {
		count2 = (n-1) - i;
		sum[i] = arr[i] - arr[count2];
				
	}
	
	for(i = 0; i < n/2; i++){
		printf("%d\n",sum[i]);
	}
	if( n % 2 != 0 ) {
		printf("%d",arr[n/2]);
	}



return 0;
}

