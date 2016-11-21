#include<stdio.h>
 
 int main()
 
{
  int i,n;
  scanf("%d",&n);
  int mas[n];
	
	for(i=0;i<n;i++){
	scanf("%d",&mas[i]);
	}	
 	
	for(i=n-1;i>=0;i--){
	printf("%d\n",mas[i]);
	}
}	
