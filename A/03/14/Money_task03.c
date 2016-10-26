#include <stdio.h> 
int main(){
	int n,i,m,k,z=0,sum=0;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&k);
	for(i=0;i<n;i++){
		sum+=m;
		z++;
		if(z==k){
			m=m-((m*2)/100.0);
			z=0;
		}
	}
	printf("%d",sum);
	return 0;
}
