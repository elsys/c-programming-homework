#include<stdio.h>
int main(){
int k,o=0;
int arr[o];
scanf("%d",&k);
	do{
	scanf("%d",&arr[o]);
	o++;
	}while(o<k);
	do{
	o--;
	printf("%d\n",arr[o]);
	}while(o>0);
return 0;
}
