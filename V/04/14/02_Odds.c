#include<stdio.h>
 int main(){
 	int n, i;
 	scanf("%d", &n);
 	int arr[n];
 
 	for(i = 0; i < n; i++){
 		scanf("%d", &arr[i]);
		if(arr[i] % 2 == 0){ i--; }
	 }

	for (i = 0; i < (n / 2); i++) {
    		printf("%d\n", arr[i] - arr[n - 1 - i]);
        }

        if (n % 2 == 1) {
      		 printf("%d\n", arr[n / 2]);
        }

	 return 0;
 }
