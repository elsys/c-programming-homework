#include <stdio.h>
int main(){
	float a,m,n,max;
	scanf("%f",&a);
	scanf("%f",&m);
	scanf("%f",&n);
	max=a;
	if(a<m){
		max=m;
	}
	if(max<n){
		max=n; 
	}
	printf("%.1f\n",max);
	return 0;
}


