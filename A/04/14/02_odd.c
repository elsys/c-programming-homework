#include <stdio.h>
int main() {
	int n,a,i=0,j,odd[10],num;
	scanf("%d",&n);
	j=0;
	while(i<20 && j!=n){
		scanf("%d",&num);
		i++;
		if (num%2!=0){
			odd[j]=num;
			j++;
		}
	}
	i=j-1;
	j=0;
	if(n%2==0){
		while(j<i){
			a=odd[j]-odd[i];
			printf("\n %d",a);
			i--;
			j++;
		}
	}else{
		 while(j!=i){
                        a=odd[j]-odd[i];
                        printf("\n %d",a);
                        i--;
                        j++;
                }printf("\n %d",odd[j]);
	}
	return 0;
}
