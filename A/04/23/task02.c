#include <stdio.h>

int main(){
	int n,i=0,s,a[100],b;
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&b);
		if(b%2!=0){a[i]=b;i++;}
	}
	n=n-1;
	i=0;
	while(i<n){
		s=a[i]-a[n];
		n--;
		i++;
		printf("%d\n",s);	
	}
	if(i==n)printf("%d",a[i]);
}
