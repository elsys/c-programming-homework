#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int a[n],i;

	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}

	for(i=n;i>0;i--){
		printf("%d\n",a[i]);
	}

	return 0;
}
