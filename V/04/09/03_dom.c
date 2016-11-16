#include<stdio.h>
#include<string.h>
int main(){
	int brr, brr2, broibukvi=0;
	char arr[1000];
	fgets(arr,1000,stdin);
	for(brr2=0;brr2<26;brr2++){
		for(brr=0;brr<strlen(arr);brr++){
			if(arr[brr]>='A'&&arr[brr]<='Z'){
				arr[brr]=arr[brr]-('A'-'a');
			}
			if(arr[brr]=='a'+brr2){
				broibukvi++;
			}
		}
		if(broibukvi!=0){
			printf("%c - %d\n", 'a'+brr2, broibukvi);
		}
		broibukvi=0;
	}
	return 0;
}
