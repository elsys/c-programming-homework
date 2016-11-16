#include <stdio.h>
int main(){
	int n,m,k,i,j=0;
	float chef,haveuseen,hellyeah,chef1;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&k);
	chef=0;
	hellyeah=0;
	haveuseen=0.02;
	i=1;
	while(i<=k){
	hellyeah=hellyeah+m;
	i++;
	j++;
	}
	i=0;
	while(j<n){
		if(i<k){
		chef=m-(haveuseen*m);
		hellyeah=hellyeah+chef;
		i++;
		j++;
		}
		else if(i==k){
		i=0;
		haveuseen=haveuseen+0.02;
		}
	}
	printf("%0.0f", hellyeah);
	return 0;
}
