#include<stdio.h>
int main()
{
	int n;

	scanf("%d",&n);

	int arr[n],i,j,razlika;

	i=0;
	while(i<n){
		scanf("%d",&arr[i]);
	if(arr[i]%2==0){continue;}
	else i++;
		};
	
	if(n%2==0){
	for(j=0;j<n;j++,n--){
		razlika=arr[j]-arr[n-1];	
		printf("%d\n",razlika);
		}
	}
	else {

	for(j=0;j<=n;j++,n--){
                razlika=arr[j]-arr[n-1];
		if(j==n-1){printf("%d",arr[j]);
				break;}
                printf("%d\n",razlika);
                }

		}

return 0;
}
