#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int a[n],i=0,j=1;

	do{
		scanf("%d",&a[i]);
		if(a[i]%2!=0){
			i++;
		}
	}while(i<n);

	for(i=0;i<n/2;i++,j++){
		printf("%d\n",a[i]-a[n-j]);
	}

	if(n%2!=0){
		printf("%d\n",a[n/2]);
	}

	return 0;
}
