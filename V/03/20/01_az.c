#include<stdio.h>
int main(){
	int n,s=0,i,p;
	scanf("%d",&n);
	for(i=0;i<n;i++){
  		scanf("%d",&p);
		s=s+p;
	}
        printf("Sum: %d\n",s);
	printf("Avg: %.2f\n",(float)s/n);
	return 0;
}
