#include<stdio.h>

int main(){

int n,m,k,j,sum=0;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&k);
 float pers=0;
 int i=k;
 for(j=0;j<n;j++){
	if(j==k){
	 k=k+i;
	 pers=pers+0.02;
	}
	sum=sum+m-m*pers;
	}
	printf("%d",sum);
return 0;
}
	 
