#include <stdio.h>


int main(){

	int n;
	scanf("%d", &n);
	

	int odd_count = 0;
	int array[n];
	int num;
	int i, result, value = n-1;

	while(odd_count < n){
		scanf("%d", &num);
		if(num%2 != 0){
			array[odd_count] = num;
			odd_count ++;
		}
	}

	if(n%2 != 0){
		int middle = (n - 1)/2;
		printf("%d\n", array[middle]);
	}else if(n%2 == 0){                                
		
		for(i=0; i<=((n-1)/2); i++ ){
			result = array[i] - array[value];		
			printf("%d\n", result);
			value --;
		}
	}
	return 0;
}
