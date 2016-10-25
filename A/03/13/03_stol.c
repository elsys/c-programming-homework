#include <stdio.h>
int main(){ 
	int n;
	float m;	
	int k;
	float a;
	float c=0.02;
	float sum;
	scanf("%d", &n);
        scanf("%f", &m);
	scanf("%d", &k);	
	sum=m*k;
	n=n-k;
	a=m*c;
	while((n-k)>=0){
		m=m-a;
		sum=sum+k*m;
		n=n-k;}
		if(n!=0){
			a=n*(m-a);
			sum=sum+a;}
	printf("%.0f", sum); 
	return 0;
}
