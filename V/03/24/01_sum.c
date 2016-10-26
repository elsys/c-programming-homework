#include<stdio.h>
int main(){
	int n,sum=0,i,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
  		scanf("%d",&a);
		sum=sum+a;
	}
        printf("Sum: %d\n",sum);
	printf("Avg: %.2f\n",(float)sum/n);
	return 0;



}
