#include<stdio.h>
int main ()
{
int n,i,odds,num,mid;
odds=0;
scanf("%d",&n);
int arr[n-1];
	do{
	scanf("%d",&num);
	if(num%2!=0){
	arr[odds]=num;
	odds++;
	}
	}while(odds<n);
mid=n/2;
for(i=0; i<mid; i++)
	printf("%d\n", arr[i]-arr[n-1-i]);
	if(n%2==1) printf("%d", arr[mid]);
	return 0;
}
