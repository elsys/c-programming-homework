#include<stdio.h>
#include<string.h>
int main(){

	int n;
	scanf("%d", &n);
	int num[100];
	int i=0;
	int j=n-1;
	int odd[n];
	int juan=i;

	for(;juan<n;i++){
		scanf("%d", &num[i]);
		if(num[i]%2!=0) {
			odd[juan]=num[i];
			juan++;
		}
	}
	i=0;
	int result;
	do{
		result=odd[i]-odd[j];
		printf("%d\n", result);
		j--;
		i++;
	}while(i<n/2);
	if(n%2!=0) printf("%d\n", odd[n/2]);



return 0;
}
