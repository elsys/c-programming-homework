#include<stdio.h>
#include<string.h>

int main(){

	int n;
	scanf("%d", &n);

	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	int tmp;
	for(int nachalo = 0, krai = n-1; nachalo < krai; nachalo++, krai--){
		tmp = arr[nachalo];
		arr[nachalo] = arr[krai];
		arr[krai] = tmp;
	}

	for(int i = 0; i<n; i++){
		printf("%d\n", arr[i]);
	}

return 0;
}
