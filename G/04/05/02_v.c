#include <stdio.h>

int main () {
int n,a,i,j,arr[n];
	scanf("%d",&n);  
	for (int i=0;i<n;){scanf("%d",&a);
	        if (a%2){
	        arr[i] = a;
	        i++;
        		}	
    			   }
	for (i=0,j=n-1;j>i;i++,j--){printf("%d\n",arr[i]-arr[j]);}
		if (i==j)
	        printf("%d\n",arr[i]);
return 0;
}
