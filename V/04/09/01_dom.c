#include<stdio.h>
int main(){
	int broi, brr=0;
	scanf("%d", &broi);
	int arr[broi];
	for(;brr<broi;brr++){
		scanf("%d", &arr[brr]);
	}
	for(brr--;brr>=0;brr--){
		printf("%d\n", arr[brr]);
	}
	return 0;
}
