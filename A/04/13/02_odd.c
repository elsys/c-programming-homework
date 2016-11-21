#include <stdio.h>
int main(){
	int n,k=0,j=0;
	int mid;
	int last,res=0;
	int odd[100];
	int num;
	scanf("%d",&n);
	while(k!=n){
		scanf("%d",&num);
			if(num%2!=0){
				odd[j]=num;
					k++;	
				}
		j++;
		
		}
	last = j - 1;
	j=0;
	if(n%2==0){
		while(j<last){
			res=odd[j]-odd[last];
			printf("%d\n",res);
			j++;
			last--;}
		}
	else { mid=n/2;
	       while(j<mid){
			res=odd[j]-odd[last];
			printf("%d\n",res);
			j++;
			last--;}
		printf("%d\n",odd[mid]);}
return 0;
}
