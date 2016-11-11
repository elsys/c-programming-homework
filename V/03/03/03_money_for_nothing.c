#include<stdio.h>
int main(){
int  n,m,k,o=0,c=0; //n-cena,m-cena na stol,k-otstupka na broy stolove
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);
for(o=0;o<n;o++){
	c=c+m-(o/k*(2*m/100));
}	
	printf("\n%d",c);
return 0;
}
