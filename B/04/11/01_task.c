#include<stdio.h>
int main()
{

 int n,i,reverse[100];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
	scanf("%d",&reverse[i]);
 }
 for(i=n-1;i>=0;i--)
 {
    	printf("%d\n",reverse[i]);
 }
 return 0;
}
