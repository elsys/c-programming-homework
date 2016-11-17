#include<stdio.h>                           
int main(){                                 
int n,k=0,o,c;                                                                  
scanf("%d",&n);
int arr[n];                             
	do{                                 
	do{scanf("%d",&arr[k]);			
	}while(arr[k]%2==0);
	k++;
	}while(k<n);
	k=0;
	c=n-1;
	do{
	o=arr[k]-arr[c];
	printf("%d\n",o);
	k++;
	c--;
	}while(k<n/2);
	if(n%2!=0){
	printf("%d\n",arr[n/2]);
	}
	return 0;
	}		
